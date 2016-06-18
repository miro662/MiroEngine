#ifndef __MIROENGINE_ECS_COMPONENT_H
#define __MIROENGINE_ECS_COMPONENT_H

// engine/include/ecs/component.h - component management

// Include list of components
#include <component-types.h>

// === TYPES ===

// Component structure
typedef struct {
  void* data;
  ComponentType type;
  Entity entity;
  struct Component* next;
} Component;

extern Component* componentList;

// === FUNCTIONS ===

// Add Component to Entity (engine/ecs/component.c)
Component* addComponent(Entity entity, ComponentType type);

// Free list of components (engine/ecs/component.c)
void freeComponentList();

#endif
