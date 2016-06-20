#include <MiroEngine.h>
#include <stdlib.h>
#include <stdio.h>

void engineMain();
void engineAtExit();
void mainLoop();

void S_Engine(EventType type, EventData* data)
{
  switch (type) {
    case OnSystemAdded:
      printf("Initialized main MiroEngine system...");
      engineMain();
      break;
    case Exit:
      exit(0);
  }
}

SDL_Window* window;

void engineMain()
{
#ifndef __EMSCRIPTEN__
  // Declare at-exit function
  atexit(engineAtExit);
#endif

  // Initialize SDL2
  SDL_Init(SDL_INIT_VIDEO);

  // Call OnInit event to everyone
  callEvent(OnInit, NULL);

  #ifdef __EMSCRIPTEN__
    emscripten_set_main_loop(mainLoop, 60, 1);
  #else
    // Main loop for standard platforms
    while (1) {
      mainLoop();
    }
  #endif
}

void mainLoop()
{
  SDL_Event sdlEvent;
  while (SDL_PollEvent(&sdlEvent)) {
    EventData d;
    d.sdlEvent = &sdlEvent;
    callEvent(SDLEvent, &d);
  }

  EventData d;
  d.deltaTime = 0;
  callEvent(OnUpdate, &d);
}

void engineAtExit()
{
  // Call OnExit event to everyone
  callEvent(OnExit, NULL);

  // Free ECS
  freeComponentList();
  freeSystems();

  //Quit from SDL
  SDL_Quit();
}
