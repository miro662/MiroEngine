#include <MiroEngine.h>
#include <stdlib.h>

Component* componentList = NULL;

Component* addComponent(Entity entity, ComponentType type) {
  //Add component to component list
  Component* newComponent = malloc(sizeof(Component));
  newComponent->type = type;
  newComponent->entity = entity;
  newComponent->next = NULL;
  newComponent->data = NULL;

  if (componentList != NULL) {
    componentList->next = (struct Component*) newComponent;
  }

  componentList = newComponent;
}

void freeComponentList() {
  Component* component = componentList;
  while (component != NULL) {
    Component* toDelete = component;
    component = (Component*) component->next;
    if (toDelete->data != NULL) {
      free(toDelete->data);
    }
    free(toDelete);
  }
}
