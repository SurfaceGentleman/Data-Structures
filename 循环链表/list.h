#ifndef LIST_H
#define LIST_H
#include<stdbool.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct list {
	int data;
	struct list * next;
} *List, Node;

void traverse(List head);
#endif