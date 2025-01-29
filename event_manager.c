#include <stdio.h>
#include <string.h>
#include "event_manager.h"

#define MAX_EVENTS 10

typedef struct {
    char eventName[50];
    event_callback_t callback;
} Event;

static Event eventRegistry[MAX_EVENTS];
static int eventCount = 0;

void register_event(const char *eventName, event_callback_t callback) {
    if (eventCount < MAX_EVENTS) {
        strcpy(eventRegistry[eventCount].eventName, eventName);
        eventRegistry[eventCount].callback = callback;
        eventCount++;
    } else {
        printf("Event registry is full. Cannot register more events.\n");
    }
}

void trigger_event(const char *eventName) {
    for (int i = 0; i < eventCount; i++) {
        if (strcmp(eventRegistry[i].eventName, eventName) == 0) {
            eventRegistry[i].callback(eventName);
            return;
        }
    }
    printf("No module registered for event: %s\n", eventName);
}
