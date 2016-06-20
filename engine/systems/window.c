#include <MiroEngine.h>

SDL_Window* window = NULL;

void createWindow();
void handleQuit();

void S_Window(EventType type, EventData* data) {
  EventData edata;
  switch (type) {
    case OnInit:
      createWindow();
      break;
    case OnExit:
      SDL_DestroyWindow(window);
      break;
    case OnUpdate:
      edata.onRender.window = window;
      edata.onRender.deltaTime = data->deltaTime;
      callEvent(OnRender, &edata);
      break;
    case SDLEvent:
      handleQuit(data->sdlEvent);
      break;
  }
}

void createWindow() {
  // Create window
  window = SDL_CreateWindow("MiroEngine", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, SDL_WINDOW_SHOWN);
}

void handleQuit(SDL_Event* event) {
  if (event->type == SDL_QUIT) {
    callEvent(Exit, NULL);
  }
}
