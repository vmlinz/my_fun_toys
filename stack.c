#include <stdio.h>
#define STACKMAXSIZE  10

typedef struct arr_node{
	int elem;
	char otherinfo;
	/* char unused[3]; */
}node;

struct node_aligned{
	int elem;
	char otherinfo;
	char unused[3];
};

node stack[STACKMAXSIZE];
int  top = -1;

void stack_full()
{
	printf( "Stack full.\n" );
	return;
}

void stack_empty()
{
	printf("Stack empty.\n" );
	return;
}

void push(int * top, node item);
void input(int *top)
{
	int m;
	int i;
	node n;

	printf("压入栈的个数元素：");
	scanf("%d",&m);
	putchar('\n');

	printf("elements pushed into stack:\n");
	for(i = 0; i < m; i++)
	{
		scanf("%d", &n.elem);
		push(top, n);
	}
}

void push(int * top, node item)
{
	if(*top == STACKMAXSIZE)
	{
		stack_full();
		return;
	}

	*top = *top + 1;
	stack[*top] = item;
}


void pop( int * top )
{
	if( *top == -1 )
	{
		stack_empty();
		return ;
	}

	int temp = * top;
	*top = *top - 1;

	printf("%d\n",stack[temp]);
}

void main()
{
	printf("sizeof struct node:%d, size of struct aligned:%d\n",
		sizeof(node), sizeof(struct node_aligned));
	input(&top);

	printf("elements poped out from stack:\n");
	while(top > -1)
		pop(&top);
}
