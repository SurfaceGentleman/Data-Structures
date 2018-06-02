#ifndef STACK
#define STACK
#define SIZE 10
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct stack {
	int top;
	int top2;
	int data[SIZE];
}stack;
void init(stack * s);
bool Pop(stack * s, int flag);
bool Push(stack * s, int n, int flag);
#endif