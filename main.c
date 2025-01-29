#include "event_trigger.h"
#include "module.h"

int main() {
    // Register modules
    register_modules();

    // Trigger events
    trigger_event_from_external("Event1");
    trigger_event_from_external("Event2");
    trigger_event_from_external("Event3"); // No modules registered for this event

    return 0;
}
