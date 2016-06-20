#ifndef __EVENT_DATA_H
#define __EVENT_DATA_H

typedef union {
  float deltaTime;
  SDL_Event* sdlEvent;
  OnRenderData onRender;
} EventData;

#endif
