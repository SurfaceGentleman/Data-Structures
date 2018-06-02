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
		printf("ջ������\n");
		return false;
	}
	if (flag == 1) {
		s->data[s->top] = n;
		s->top++;
		printf("%d����ջ��\n", n);
	}
	else if (flag == 2) {
		s->data[s->top2] = n;
		s->top2--;
		printf("%d����ջ��\n", n);
	}
	
	return true;
}
bool Pop(stack * s, int flag)
{
	if (flag == 1) {
		if (s->top == -1) {
			printf("��ջ\n");
			return false;
		}
		printf("%d�ѳ�ջ!\n", s->data[s->top--]);
	}
	if (flag == 2) {
		if (s->top2 == SIZE) {
			printf("��ջ\n");
			return false;
		}
		printf("%d�ѳ�ջ!\n", s->data[s->top2++]);
	}
	return true;
}