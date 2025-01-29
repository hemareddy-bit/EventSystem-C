Event System in C

Overview

The Event System in C is a simple implementation of an event-driven architecture. It allows modules to register and trigger events dynamically, demonstrating modular programming principles.

Features

Event registration and triggering

Modular structure with separate event management and module handlers

Simple and efficient C-based implementation

File Structure

EventSystem-C/
├── main.c               # Entry point of the program
├── event_manager.c      # Manages event registration and triggering
├── event_manager.h      # Header file for event manager
├── event_trigger.c      # Handles external event triggers
├── event_trigger.h      # Header file for event trigger
├── module.c             # Module handlers for registered events
├── module.h             # Header file for modules
├── makefile             # Build automation script

Compilation & Execution

Step 1: Compile the project

Use mingw32-make (on Windows) or make (on Linux/Mac) to build the project:

mingw32-make

This will generate an executable named event_system.

Step 2: Run the program

./event_system

Usage

The system allows modules to register event handlers.

When an event is triggered, the corresponding handler function is executed.

Example Output

Registering modules...
Event 'A' triggered!
Module A handler executed.
Event 'B' triggered!
Module B handler executed.
