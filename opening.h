#ifndef opening_h
#define opening_h

#include "state.h"

// Declare all of the functions performed
// when in the closed state.
static state_t *close_button_pressed();
static state_t *opened_detected();
static void entry_to_opening();
static void exit_from_opening();

#endif
