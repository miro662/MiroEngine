#ifndef __EVENT_TYPES_H
#define __EVENT_TYPES_H

typedef enum {
  #include <code-event-types.h>
  ,
  // Events related to ECS
  OnSystemAdded,
  // Events related to main loop
  OnInit,
  OnExit,
  OnUpdate,
  OnRender,
  Exit,
  // Events related to SDL2
  SDLEvent
} EventType;

#endif
