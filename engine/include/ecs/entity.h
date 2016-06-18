#ifndef __MIROENGINE_ECS_ENTITY_H
#define __MIROENGINE_ECS_ENTITY_H

// engine/include/ecs/entity.h - basic entity management

// === TYPES ===

// Definition of type Entity (as entities are just unique unsigned numbers,
// define it as alias of unsigned)
typedef unsigned Entity;

// === FUNCTIONS ===

// Creates new entity (engine/ecs/entity.c)
Entity createEntity();

// Deletes entity (engine/ecs/entity.c)
void deleteEntity(Entity entity);

#endif
