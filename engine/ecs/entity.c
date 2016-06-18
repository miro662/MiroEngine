#include <MiroEngine.h>

Entity createEntity() {
  // Get new entity's number
  static unsigned newUniqueNumber = 1;
  Entity newEntity = newUniqueNumber++;

  return newEntity;
}

void deleteEntity(Entity entity) {
  // TODO: fill this function with deleting everything related to this entity
}
