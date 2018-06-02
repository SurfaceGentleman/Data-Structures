#include"stack.h"
int main(void)
{
	stack * s = (stack *)malloc(sizeof(stack));
	init(s);
	printf("请输入您需要入栈的个数：");
	int n;
	scanf("%d", &n);
	int t;
	for (int i = 0; i < n; i++) {
		scanf("%d", &t);
		push(s, t);
	}
	printf("该栈中一共有%d项\n",s->count);
	pop(s);
	print(s);
	return 0;
}