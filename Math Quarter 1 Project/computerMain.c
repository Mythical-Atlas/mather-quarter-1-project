#include <stdio.h>
#include <stdbool.h>
#include <simple2d.h>

#include "main.h"

void computerMain__draw(int input) {}
int computerMain__getInput() {}

int main() {
	S2D_Window *window = S2D_CreateWindow(
		"CE Mario",  // title of the window
		320, 240,        // width and height
		NULL, NULL,  // callback function pointers (these can be NULL)
		0                // flags
	);
	window->fps_cap = 60;
	S2D_Show(window);

	main__init(computerMain__draw, computerMain__getInput);

	while (true) {main__update();}

	S2D_Close(window);
	return(0);
}