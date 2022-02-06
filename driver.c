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
			current_event = CLOSE_BUTTON_PRESSED;
			puts("Event: CLOSE_BUTTON_PRESSED");
			break;
		case 'C':
			current_event = CLOSED_DETECTED;
			puts("Event: CLOSE_DETECTED");
			break;
		case 'o':
			current_event = OPEN_BUTTON_PRESSED;
			puts("Event: OPEN_BUTTON_PRESSED");
			break;
		case 'O':
			current_event = OPENED_DETECTED;
			puts("Event: OPENED_DETECTED");
			break;
		case 'x':
			break;
		default:
			if (key != '\n') {
				puts("Event: INVALID_EVENT");
			}
		}
	}
}
