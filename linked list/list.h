#ifndef LIST_H
#define LIST_H
#define L 50

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

typedef struct message {
	char name[20];
	int age;
} Item;

typedef struct node {
	Item item;
	struct node * next;
} Node, *List;

List creat(void);
bool add(List head);
bool del(List head);
bool change(List head);
bool search(List head);
void traverse(List head);
#endif