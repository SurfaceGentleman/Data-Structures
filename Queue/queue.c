#include"queue.h"
void InitializeQueue(Queue * pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}
bool queueIsFull(const Queue * pq)
{
	return pq->items == SIZE;
}
bool queueIsEmpty(const Queue * pq)
{
	return pq->items == 0;
}
int QueueItemCount(const Queue * pq)
{
	return pq->items;
}
bool EnQueue(Item item, Queue * pq)
{
	Node * pnew;
	if (queueIsFull(pq)) {
		return false;
	}
	pnew = (Node*)malloc(sizeof(Node));
	if (pnew == NULL) {
		puts("Error!");
		exit(1);
	}
	pnew->item = item;
	pnew->next = NULL;
	if (queueIsEmpty(pq)) {
		pq->front = pnew;
	}
	else {
		pq->rear->next = pnew;
	}
	pq->rear = pnew;
	pq->items++;
	return true;
}
bool DeQueue(Item item, Queue * pq)
{
	Node * pt;
	if (queueIsEmpty(pq)) {
		return false;
	}
	pq->front->item = item;
	pt = pq->front;
	pq->front = pq->front->next;
	printf("%d已出队列", pt->item);
	free(pt);
	pq->items--;
	if (pq->items == 0) {
		pq->rear = NULL;
	}
	return true;
}