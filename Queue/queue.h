#ifndef Queue_
#define Queue_
#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 6

typedef int Item;

typedef struct node{
	Item item;
	struct node * next;
}Node;
typedef struct queue{
	Node * front;
	Node * rear;
	int items;
}Queue;

void InitializeQueue(Queue * pq);

bool queueIsFull(const Queue * pq);
bool queueIsEmpty(const Queue * pq);
int QueueItemCount(const Queue * pq);

bool EnQueue(Item item, Queue * pq);
bool DeQueue(Item item, Queue * pq);

void EmptyTheQueue(Queue * pq);
#endif
