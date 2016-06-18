#include <MiroEngine.h>
#include <math.h>

Vector vector(float x, float y) {
  Vector v;
  v.x = x;
  v.y = y;
  return v;
}

Vector addVectors(Vector lhs, Vector rhs) {
  lhs.x += rhs.x;
  lhs.y += rhs.y;
  return lhs;
}

Vector subtractVectors(Vector lhs, Vector rhs) {
  lhs.x -= rhs.x;
  lhs.y -= rhs.y;
  return lhs;
}

Vector multiplyVectorByScalar(Vector vector, float scalar) {
  vector.x *= scalar;
  vector.y *= scalar;
  return vector;
}

float vectorLength(Vector vector) {
  return sqrt(pow(vector.x, 2) + pow(vector.y, 2));
}

Vector normalize(Vector vector) {
  float len = vectorLength(vector);
  if (len != 0) {
    vector.x /= len;
    vector.y /= len;
  }
  return vector;
}

float dot(Vector lhs, Vector rhs) {
  float product;
  product = lhs.x * rhs.x;
  product +=  lhs.y * rhs.y;
  return product;
}
