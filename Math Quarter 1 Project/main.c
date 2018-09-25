#include "main.h"

void(*main__draw)(int);
int(*main__getInput)(void);

void main__init(void(*drawArg)(int), int(*getInputArg)(void)) {
	main__draw = drawArg;
	main__getInput = getInputArg;
}

void main__update() {}