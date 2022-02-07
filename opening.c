#include "opening.h"
#include "hardware.h"
#include "statemodel.h" // For the other states

// Create the object of the closed state.
state_t opening = {
    close_button_pressed,   // close_button_pressed
    default_event_handler, // closed_detected
    default_event_handler, // open button
    opened_detected,        // opened_detected
    entry_to_opening,       // entry_to
    exit_from_opening       // exit_from
};

state_t *close_button_pressed()
{
    exit_from_opening();
    return &closing;
}

state_t *opened_detected()
{
    exit_from_opening();
    return &opened;
}

void entry_to_opening()
{
    set_motor(MOTOR_OPENING);
}

void exit_from_opening()
{
}