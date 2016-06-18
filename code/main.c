// This is default main.c file
// It contains simple main function
// You should modify it or even delete it and place main function somewhere else

#include <MiroEngine.h>
#include <stdio.h>

int main(){
  Entity ball = createEntity();
  Component* transform = addComponent(ball, Unknown);
  Component* transform2 = addComponent(ball, Unknown);

  freeComponentList();
  return 0;
}
