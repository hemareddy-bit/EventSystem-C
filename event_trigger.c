#include "event_manager.h"
#include "event_trigger.h"

void trigger_event_from_external(const char *eventName) {
    trigger_event(eventName);
}
