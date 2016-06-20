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
  }
}

SDL_Window* window;

void engineMain()
{
  // Declare at-exit function
  atexit(engineAtExit);

  // Initialize SDL2
  SDL_Init(SDL_INIT_VIDEO);

  // Call OnInit event to everyone
  callEvent(OnInit, NULL);

  // Main loop for standard platforms
  while (1) {
    mainLoop();
  }
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
  d.sdlEvent = &sdlEvent;
  callEvent(OnUpdate, NULL);
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
