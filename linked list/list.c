#include"list.h"
List creat(void)
{
	List head = (List)malloc(sizeof(Node));
	head->next = NULL;
	return head;
}
bool add(List head)
{
	Item people;
	printf("Please input your name:");
	gets(people.name);
	printf("Please input your age:");
	scanf("%d", &people.age);

	getchar();

	List p = (List)malloc(sizeof(Node));
	p->item = people;
	p->next = head->next;
	head->next = p;

	return true;
}
bool del(List head)
{
	char nameWillBeenDelete[L];
	printf("Please input the student's name who will you delete:");
	gets(nameWillBeenDelete);

	List prev = head;
	List p = prev->next;
	while (NULL != p) {
		if (!strcmp(p->item.name, nameWillBeenDelete)) {
			List t = p;
			prev->next = p->next;
			printf("%s has been delete!\n", t->item.name);
			free(t);
			return true;
		}
		prev = p;
		p = p->next;
	}
	puts("Not found!");
	return false;
}
bool change(List head)
{
	char nameWillBeenChange[L];
	printf("Please input the student's name who will you change:");
	gets(nameWillBeenChange);

	List p = head->next;
	while (NULL != p) {
		if (!strcmp(p->item.name, nameWillBeenChange)) {
			printf("Please input your new name:");
			gets(p->item.name);
			printf("Please input your new age:");
			scanf("%d", &p->item.age);

			getchar();

			printf("New:name:%s		age:%d\n", p->item.name, p->item.age);

			return true;
		}
		p = p->next;
	}
	puts("Not found!");
	return false;
}

bool search(List head)
{
	char nameWillBeenSearch[L];
	printf("Please input the student's name who will you search:");
	gets(nameWillBeenSearch);

	List p = head->next;
	while (NULL != p) {
		if (!strcmp(p->item.name, nameWillBeenSearch)) {
			printf("message: name:%s	age:%d\n", p->item.name, p->item.age);
			return true;
		}
		p = p->next;
	}
	printf("Not Found!\n");
	return false;
}

void traverse(List head)
{
	List p = head->next;

	puts("Output all message:\n\n");

	while (NULL != p) {
		printf("%s	%d\n", p->item.name, p->item.age);
		p = p->next;
	}
}
