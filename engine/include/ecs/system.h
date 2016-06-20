#ifndef __MIROENGINE_ECS_SYSTEM_H
#define __MIROENGINE_ECS_SYSTEM_H

// /engine/include/ecs/system.h - system management

// === TYPES ===

// Defines single system
typedef struct {
  void(*function)(EventType type, EventData* data);
  struct SystemItem* next;
} SystemItem;

// === FUNCTIONS ===

// Adds new system
void addSystem(void(*systemFunction)(EventType type, EventData* data));
// Calls event
void callEvent(EventType type, EventData* data);
// Frees events
void freeSystems();

#endif
