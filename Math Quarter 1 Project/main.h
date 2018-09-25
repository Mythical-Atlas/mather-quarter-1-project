#ifndef MAIN_H
#define MAIN_H

extern void(*main__draw)(int);
static int(*main__getInput)(void);

extern void main__init(void(*drawArg)(int), int(*getInputArg)(void));

extern void main__update();

#endif