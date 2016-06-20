#ifndef __MIROENGINE_COMPONENT_TRANSFORM_H
#define __MIROENGINE_COMPONENT_TRANSFORM_H

#include <math/vector.h>

// Component defining position and rotation of object
typedef struct {
  // Object position
  Vector position;
  // Object rotation (in degrees)
  float rotation;
} C_Transform;
#endif
