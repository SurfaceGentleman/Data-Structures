#include"stack.h"
int main(void)
{
	stack * s = (stack *)malloc(sizeof(stack));
	init(s);
	printf("����������Ҫ��ջ�ĸ�����");
	int n;
	scanf("%d", &n);
	int t;
	for (int i = 0; i < n; i++) {
		scanf("%d", &t);
		push(s, t);
	}
	printf("��ջ��һ����%d��\n",s->count);
	pop(s);
	print(s);
	return 0;
}