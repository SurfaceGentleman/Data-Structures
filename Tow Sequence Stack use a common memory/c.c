#include"stack.h"
int main(int argc, char * argv[])
{
	stack * s;
	s = (stack*)malloc(sizeof(stack));
	init(s);
	int flag;
	int val;//��ʱ����
	int n;
	printf("��������Ҫ������ջ�����(1 normal), (2 reverse)��");
	scanf("%d", &flag);
	printf("����������Ҫ��ջ�ĸ���:");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &val);
		Push(s, val, flag);
	}
	Pop(s, 1);
	return 0;
}