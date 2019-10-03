//All right reserved don't coppy for web  use
//copywrite@ etechnicalschool.com

#include<bits/stdc++.h>
using namespace std;
int array[50], top=-1, item, i, num_of_element;
#define maxsize 50
void push()
{
	if(top>=maxsize-1)
		{
			printf("stack overflow\n");
		}
	else
	{
		printf("Enter element number you want to intsert: ");
		scanf("%d", &num_of_element);
		printf("Enter the %d item: ", num_of_element);
		for(i=0; i<num_of_element; i++)
		{
			scanf("%d", &item);
			top=top+1;
			array[top]=item;
		}		
	}	
}

void pop()
{	
	if(top==-1)
	{
		printf("Stack is underflow\n");
	}
	else
	{
		printf("Pop item is: %d\n ", array[top]);
		top=top-1;
	}	
}


void display()
{
	
	if(top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("Display stack item from top: ");
		for(i=top; i>=0; i--)
		{
			printf(" %d", array[i]);
		}
	}
}
int main()
{

	push();
	pop();
	display();
}
