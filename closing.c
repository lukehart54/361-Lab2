#include "closing.h"
#include "hardware.h"
#include "statemodel.h" // For the other states

// Create the object of the opened state.
state_t closing = {
    default_event_handler, // open_button_pressed
    default_event_handler, // opened_detected
    open_button,           // open button
    default_event_handler, // opened_detected
    entry_to_closing,       // entry_to
    exit_from_closing       // exit_from
};

state_t *open_button()
{
    exit_from_closing();
    return &opening;
}

void entry_to_closing()
{
    set_motor(MOTOR_CLOSING);
}

void exit_from_closing()
{
}