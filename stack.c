//Stack
#include<stdio.h>
#define size 5
int stack[size];
int top=-1;
void push(int);
void pop();
void display();
int main()
{
	display();
	push(10);
	push(20);
	push(30);
	push(40);
    push(50);
	printf("\nElements of stack are:\n");
	display();
	push(60);
	pop();
	printf("\nElements of stack are:\n");
	display();
	return 0;
}
void push(int item)
{
	if(top==size-1) //Stack is full or not
	{ 
	 printf("Stack is FULL or OVERFLOW");
	}
	else
	{
		top++; 
		stack[top] = item;
	}
}
void pop()
{
	if(top == -1) //stack is empty or not
	{
		printf("Stack is EMPTY or UNDERFLOW");
	}
	else
	{
		printf("\npoped item is %d\n",stack[top]);
		top--;
	}
}
void display()
{
	if(top == -1) //stack is empty or not
	{
		printf("Stack is EMPTY or UNDERFLOW");
	}
	else
	{
		for(int i=0;i<=top;i++)
			printf("%d ",stack[i]);
	}
}