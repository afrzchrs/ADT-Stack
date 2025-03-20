#ifndef STACK_H
#define STACK_H

#include "linkedlist.h"

typedef address Stack; // Memastikan Stack sesuai dengan address dari linked list

Stack* createStack();
void freeStack(Stack **s); // Mengubah parameter menjadi pointer ke pointer
void push(Stack **s, int value);
int pop(Stack **s);

#endif

