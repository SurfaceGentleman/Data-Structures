#include"stack.h"
int main(void)
{
	stack * a;
	a = (stack *)malloc(sizeof(stack));
	init(a);
	puts("����������Ҫ��ջ�ĸ���");
	int n;
	scanf("%d", &n);
	int t;//��ʱ����
	for (int i = 0; i < n; i++) {
		printf("������ֵ��");
		scanf("%d", &t);
		if (!push(a, t)) {
			printf("ջ������\n");
		}
	}
	if (!pop(a)) {
		printf("ջ�ǿյģ�\n");
	}
	print(a);
	return 0;
}