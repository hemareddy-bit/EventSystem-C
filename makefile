CC = gcc
CFLAGS = -Wall -g

all: event_system

event_system: main.o event_manager.o event_trigger.o module.o
	$(CC) $(CFLAGS) -o event_system main.o event_manager.o event_trigger.o module.o

main.o: main.c event_trigger.h module.h
	$(CC) $(CFLAGS) -c main.c

event_manager.o: event_manager.c event_manager.h
	$(CC) $(CFLAGS) -c event_manager.c

event_trigger.o: event_trigger.c event_manager.h event_trigger.h
	$(CC) $(CFLAGS) -c event_trigger.c

module.o: module.c event_manager.h module.h
	$(CC) $(CFLAGS) -c module.c

clean:
	rm -f *.o event_system
