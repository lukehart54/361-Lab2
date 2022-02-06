#include "opening.h"
#include "hardware.h"
#include "statemodel.h" // For the other states

// Create the object of the closed state.
state_t opening = {
    default_event_handler, // close_button_pressed
    default_event_handler, // closed_detected
    close_button,           // close button
    default_event_handler, // opened_detected
    entry_to_opening,       // entry_to
    exit_from_opening       // exit_from
};

state_t *close_button()
{
    exit_from_opening();
    return &closing;
}

void entry_to_opening()
{
    set_motor(MOTOR_OPENING);
}

void exit_from_opening()
{
}