#include"list.h"
void traverse(List head)
{
	int i = -1;
	List p = head->next;
	while (1) {
		if (head->next == p) {
			i++;
		}
		if (i == 1) {
			return;
		}
		printf("%d\n", p->data);
		p = p->next;
	}
}

