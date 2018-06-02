#include"stack.h"
int main(int argc, char * argv[])
{
	stack * s;
	s = (stack*)malloc(sizeof(stack));
	init(s);
	int flag;
	int val;//临时变量
	int n;
	printf("请输入您要操作的栈的序号(1 normal), (2 reverse)：");
	scanf("%d", &flag);
	printf("请输入您需要入栈的个数:");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &val);
		Push(s, val, flag);
	}
	Pop(s, 1);
	return 0;
}