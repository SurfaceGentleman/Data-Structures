#include"list.h"
int main(void)
{
	List head = creat();
	
	int n;
	printf("Please input how number sutdents will you want:");
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++) {
		add(head);
	}

	del(head);

	change(head);

	search(head);

	traverse(head);

	return 0;
}