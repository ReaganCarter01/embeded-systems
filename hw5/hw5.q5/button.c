#include <stdbool.h>
#include <avr/io.h>

// button is connected to pin A7
// when button is pressed, A7 reads high.
// when button is not pressed, A7 reads low.

void initButton() {
void pollButton() {