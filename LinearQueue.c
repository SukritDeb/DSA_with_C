#include<stdio.h>
#include<stdlib.h>
#define max 5
int arr[max];
void insert(int);
void deletion();
void display();
int r=-1;
int f=-1;
int main()
{ 
	int ch,item;
	while(1)
	{
		printf("\n1. Insert\n 2. Delete\n 3. Display\n 4. Exit\n Enter your choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the element:");
				scanf("%d",&item);
				insert(item);
				f=0;
				break;
			case 2:
				deletion();
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

void insert(int item)
{
	if(r==max-1)
		printf("Queue is full\n");
	else
		{
			r++;
			arr[r]=item;
		}
}

void deletion()
{
	if(f==-1)
		printf("Stack is empty\n");
	else
		printf("Removing element: %d\n",f);
		f++;
}

void display()
{
	for(int i=f; i<=r; i++)
		printf("%5d\t",arr[i]);
}
