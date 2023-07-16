#include<stdio.h>

typedef struct node
{
	int info;    // Info part
	struct node *link;    // Link part
} Node;

main()
{
	Node *p;
	p = (Node*)malloc (sizeof(Node));    // Dynamic memory allocation
	p->info = 10;
	p->link = NULL;
}
