#ifndef STACK
#define STACK
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#define SIZE 1000
typedef struct node {
	int data;
	struct node * next;
}stacknode;
typedef struct node2 {
	stacknode * top;
	int count;
}stack;
void init(stack * s);
bool push(stack * s, int n);
bool pop(stack * s);
void print(stack * s);
//void print(stack * s);
#endif
