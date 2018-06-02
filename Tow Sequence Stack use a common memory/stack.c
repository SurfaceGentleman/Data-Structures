#include"stack.h"
void init(stack * s)
{
	s->top = -1;
	s->top2 = SIZE;
	return;
}
bool Push(stack * s,int n, int flag)
{
	if (s->top2 + 1 == s->top2) {
		printf("栈已满！\n");
		return false;
	}
	if (flag == 1) {
		s->data[s->top] = n;
		s->top++;
		printf("%d已入栈！\n", n);
	}
	else if (flag == 2) {
		s->data[s->top2] = n;
		s->top2--;
		printf("%d已入栈！\n", n);
	}
	
	return true;
}
bool Pop(stack * s, int flag)
{
	if (flag == 1) {
		if (s->top == -1) {
			printf("空栈\n");
			return false;
		}
		printf("%d已出栈!\n", s->data[s->top--]);
	}
	if (flag == 2) {
		if (s->top2 == SIZE) {
			printf("空栈\n");
			return false;
		}
		printf("%d已出栈!\n", s->data[s->top2++]);
	}
	return true;
}