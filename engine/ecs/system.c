#include <MiroEngine.h>
#include <stdlib.h>

SystemItem* systemList = NULL;

void addSystem(void(*systemFunction)(EventType type, EventData* data)) {
  SystemItem* newSystem = malloc(sizeof(SystemItem));
  newSystem->function = systemFunction;
  if (systemList != NULL) {
    newSystem->next = (struct SystemItem*) systemList;
  }
  systemList = newSystem;
  callEvent(OnSystemAdded, NULL);
}

void freeSystems() {
  SystemItem* next = systemList;
  while (next != NULL) {
    SystemItem* current = next;
    next = (SystemItem*) current->next;
    free(current);
  }
}

void callEvent(EventType type, EventData* data) {
  SystemItem* next = systemList;
  while (next != NULL) {
    SystemItem* current = next;
    next = (SystemItem*) current->next;
    (current->function)(type, data);
  }
}
