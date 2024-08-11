#include<stdio.h>
#include<stdlib.h>
#define max 5
int arr[max];
void push(int);
void pop();
void display();
int top=-1;
int main()
{ 
	int ch,item;
	while(1)
	{
		printf("\n1. Push\n 2. Pop\n 3. Display\n 4. Exit\n Enter your choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the element:");
				scanf("%d",&item);
				push(item);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
		}
	}
return 0;
}

void push(int item)
{
	if(top==max-1)
		printf("Stack is full\n");
	else
		{
			top++;
			arr[top]=item;
		}
}

void pop()
{
	if(top==-1)
		printf("Stack is empty\n");
	else
		printf("Removing element: %d\n",top--);
}

void display()
{
	for(int i=top; i>=0; i--)
		printf("%5d\n",arr[i]);
}