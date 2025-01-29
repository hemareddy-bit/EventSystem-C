#ifndef EVENT_MANAGER_H
#define EVENT_MANAGER_H

typedef void (*event_callback_t)(const char *eventName);

void register_event(const char *eventName, event_callback_t callback);
void trigger_event(const char *eventName);

#endif
