#ifndef __MIROENGINE_MATH_VECTOR_H
#define __MIROENGINE_MATH_VECTOR_H

// engine/include/math/vector.h - definition of vector and aulixary function

// === TYPES ===

// Describes 2-dimenisional vector
typedef struct {
  float x;
  float y;
} Vector;

// === FUNCTIONS ===

// Creates vector (engine/ecs/vector.c)
Vector vector(float x, float y);

// Adds 2 vectors (engine/ecs/vector.c)
Vector addVectors(Vector lhs, Vector rhs);
#define vAdd(a, b) addVectors(a, b)
// Subtracts 2 vectors (engine/ecs/vector.c)
Vector subtractVectors(Vector lhs, Vector rhs);
#define vSub(a, b) subtractVectors(a, b)

// Multiplies vector by scalar (engine/ecs/vector.c)
Vector multiplyVectorByScalar(Vector vector, float scalar);
#define vMul(a, b) multiplyVectorByScalar(a, b)

//Get vector length (engine/ecs/vector.c)
float vectorLength(Vector vector);

// Normalize vector (get vector in same dir, but with length 1) (engine/ecs/vector.c)
Vector normalize(Vector vector);

// Calculate dot product (engine/ecs/vector.c)
float dot(Vector lhs, Vector rhs);

#endif
