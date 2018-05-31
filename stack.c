#include"stack.h"
bool init(stack * st)
{
	st->top = -1;
	return true;
}
bool push(stack * s, int n)
{
	if (s->top == SIZE - 1) {
		return false;
	}
	s->top++;
	s->num[s->top] = n;
	printf("%d已入栈\n", n);
	return true;
}
bool pop(stack * s)
{
	if (s->top == -1) {
		return false;
	}
	printf("%d已被弹出\n", s->num[s->top]);
	s->top--;
	return true;
}
void print(stack * s)
{
	while (s->top != -1) {
		printf("%d\n", s->num[s->top--]);
	}
	return;
}
