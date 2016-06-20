#ifndef __MIROENGINE_H
#define __MIROENGINE_H

// MiroEngine.h - main MiroEngine include file

// SDL2
#include <SDL2/SDL.h>

// math
#include "math/vector.h"

// Typefiles
#include <events/event-types.h>
#include <component-types.h>

// Events
#include <events/onrender.h>
#include <events/event-data.h>

// ECS
#include "ecs/entity.h"
#include "ecs/component.h"
#include "ecs/system.h"

// components
#include <components/transform.h>


// SYSTEMS
#include <systems/engine.h>


#endif
