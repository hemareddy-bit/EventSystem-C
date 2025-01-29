#include <stdio.h>
#include "event_manager.h"
#include "module.h"

void moduleA_handler(const char *eventName) {
    printf("Module A handled event: %s\n", eventName);
}

void moduleB_handler(const char *eventName) {
    printf("Module B handled event: %s\n", eventName);
}

void register_modules() {
    register_event("Event1", moduleA_handler);
    register_event("Event2", moduleB_handler);
}
