#include "statemodel.h"
#include <stdio.h>

extern state_t *current_state;

int main(void)
{
	event current_event;
	int key;

	printStateName();
	current_state->entry_to();

	while ((key = getchar()) != 'x')
	{
		if (key == '\n')
			continue;
		current_event = INVALID_EVENT;
		switch (key)
		{
		case 'c':
			puts("Event: CLOSE_BUTTON_PRESSED");
			current_event = CLOSE_BUTTON_PRESSED;
			// handle_event(current_event);
			break;
		case 'C':
			puts("Event: CLOSED_DETECTED");
			current_event = CLOSED_DETECTED;
			// handle_event(current_event);
			break;
		case 'o':
			puts("Event: OPEN_BUTTON_PRESSED");
			current_event = OPEN_BUTTON_PRESSED;
			// handle_event(current_event);
			break;
		case 'O':
			puts("Event: OPENED_DETECTED");
			current_event = OPENED_DETECTED;
			// handle_event(current_event);
			break;
		default:
			if (key != '\n')
			{
				puts("Event: INVALID_EVENT");
			}
		}
		if (current_event != INVALID_EVENT) {
			handle_event(current_event);
		}
	}
	puts("\n");
}
