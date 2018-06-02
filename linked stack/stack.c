#include"stack.h"
void init(stack *s)
{
	s->top = NULL;
	s->count = 0;
}
bool push(stack * s, int n)
{
	stacknode *p = (stacknode *)malloc(sizeof(stacknode));
	p->data = n;
	p->next = s->top;
	s->top = p;
	s->count++;
	printf("%d已入栈\n", p->data);
	return true;
}
bool pop(stack * s)
{
	if (s->top == NULL) {
		return false;
	}
	stacknode * p;
	p = s->top;
	s->top = s->top->next;
	s->count--;
	printf("%d已出栈\n", p->data);
	free(p);
	return true;
}
void print(stack * s)
{
	stacknode * p;
	p = s->top;
	if (p == NULL) {
		printf("No data\n");
		return;
	}
	while (p) {
		printf("%d ", p->data);
		p = p->next;
	}
	putchar('\n');
	return;
}