#include"stack.h"
int main(void)
{
	stack * a;
	a = (stack *)malloc(sizeof(stack));
	init(a);
	puts("请输入您需要入栈的个数");
	int n;
	scanf("%d", &n);
	int t;//临时变量
	for (int i = 0; i < n; i++) {
		printf("请输入值：");
		scanf("%d", &t);
		if (!push(a, t)) {
			printf("栈已满！\n");
		}
	}
	if (!pop(a)) {
		printf("栈是空的！\n");
	}
	print(a);
	return 0;
}