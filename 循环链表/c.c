#include"list.h"
int main(void)
{
	List head = (List)malloc(sizeof(Node));
	head->next = NULL;
	List prev = head;

	int num;

	//输入非int类型的值会停止输入

	while (scanf("%d", &num) == 1) {
		List pnew = (List)malloc(sizeof(Node));
		pnew->data = num;
		pnew->next = head->next;
		prev->next = pnew;
		prev = pnew;
		pnew = pnew->next;
	}

	traverse(head);

	return 0;
}