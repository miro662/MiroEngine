// This is default main.c file
// It contains simple main function
// You should modify it or even delete it and place main function somewhere else

#include <MiroEngine.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
  Entity ball = createEntity();
  Component* transform = addComponent(ball, Transform);
  transform->data = malloc(sizeof(C_Transform));
  C_Transform* transformData = (C_Transform*) transform->data;
  transformData->position = vector(0,0);
  transformData->rotation = 0;
  freeComponentList();
  return 0;
}
