#include"queue.h"
int main(void)
{
	Queue *line = (Queue * )malloc(sizeof(Queue));
	Item temp;
	char ch;

	InitializeQueue(line);
	puts("Testing the Queue interface. Type a to add a value,");
	puts("type d to delete a value, and type q to quit.");
	while ((ch = getchar()) != 'q') {
		if (ch != 'a' && ch != 'd') {
			continue;
		}
		if (ch == 'a') {
			printf("Integer to add: ");
			scanf("%d", &temp);
			if (!queueIsFull(line)) {
				printf("Putting %d into queue\n", temp);
				EnQueue(temp, line);
			}
			else
				puts("Queue is full");
		}
		else {
			if (queueIsEmpty(line)) {
				puts("No data!");
			}
			else {
				DeQueue(temp, line);
			}
		}
		printf("%d items in queue\n", QueueItemCount(line));
		puts("Type a to add, d to delete, q to quit");
	}
	puts("Bye");
	return 0;
}