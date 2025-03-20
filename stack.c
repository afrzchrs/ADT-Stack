#include <stdio.h>
#include "stack.h"
#include "linkedlist.h"

Stack* createStack() {
    return NULL; // Stack kosong diimplementasikan sebagai linked list kosong
}

void freeStack(Stack **s) {
    while (!isEmpty(*s)) {
        int temp;
        Del_Awal(s, &temp);
    }
    *s = NULL; // Pastikan stack dikosongkan setelah dibebaskan
}

void push(Stack **s, int value) {
    address PNew;
    Create_Node(&PNew);
    Isi_Node(&PNew, value);
    Ins_Awal(s, PNew);
}

int pop(Stack **s) {
    if (!isEmpty(*s)) {
        int value;
        Del_Awal(s, &value);
        return value;
    } else {
        printf("Stack kosong!\n");
        return -1;
    }
}

