#ifndef Stack
#define Stack
#define SIZE 10
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
typedef struct data {
	int num[SIZE];
	int top;
}stack;
bool init(stack * st);
bool push(stack * s, int n);
bool pop(stack * s);
void print(stack * s);
#endif
