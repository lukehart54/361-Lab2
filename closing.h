#ifndef closing_h
#define closing_h

#include "state.h"

// Declare all of the functions performed
// when in the closed state.
static state_t *open_button_pressed();
static state_t *closed_detected();
static void entry_to_closing();
static void exit_from_closing();

#endif
