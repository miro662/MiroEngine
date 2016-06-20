// This is default main.c file
// It contains simple main function
// You should modify it or even delete it and place main function somewhere else

#include <MiroEngine.h>
#include <stdio.h>
#include <stdlib.h>

void testSystem(EventType type, EventData* data) {
  printf("Called TestEvent!\n");
}

int main() {
  addSystem(testSystem);
  freeSystems();
  return 0;
}
