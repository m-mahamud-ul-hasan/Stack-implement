#include<bits/stdc++.h>
using namespace std;
int top, num_of_item, array[50], i, item;
#define maxsize 50 

void initial()
{
	top= -1;
}
bool isFull()
{
	if(top == maxsize-1)
	{
		return 1;
	}
	else
	{	
		return 0;
	}	
}
bool isEmpty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{ 
		return 0;
	}
}

void push()
{
	if(isFull())
	{
		printf("Stack is overflow\n");
	}
	else
	{
		printf("Enter the number of item you wanna insert: ");
		scanf("%d", &num_of_item);
		printf("Enter %d items : ", num_of_item);
		for(i=0; i<num_of_item; i++)
		{
			scanf("%d", &item);
			top = top+1;
			array[top]=item;			
		}
		
	}
}
int pop()
{
	if(isEmpty())
	{
		printf("Stack is Underflow\n");
	}
	else
	{
		printf("Pop item is:%d \n", array[top]);
		top= top-1;		
	}
}

int peek()
{
	if(isEmpty())
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("The stack items are: ");
		for(i=top; i>=0; i--)
		{
			printf("%d ", array[i]);
		}
	}
}

int main()
{
	initial();

	push();

	pop();
	
	peek();
		
}

