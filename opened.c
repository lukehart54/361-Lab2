#include "opened.h"
#include "hardware.h"
#include "statemodel.h" // For the other states

// Create the object of the closed state.
state_t opened = {
    default_event_handler, // close_button_pressed
    default_event_handler, // closed_detected
    close_button,           // close_button_pressed
    default_event_handler, // opened_detected
    entry_to_opened,       // entry_to
    exit_from_opened       // exit_from
};

state_t *close_button()
{
    exit_from_opened();
    return &closing;
}

void entry_to_opened()
{
    set_opened_indicator(LED_ON);
}

void exit_from_opened()
{
    set_opened_indicator(LED_OFF);
}