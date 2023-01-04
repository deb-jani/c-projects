#include <stdio.h>
#include <stdlib.h>
#define MAX 4

int deque[MAX];
int front=-1, rear=-1;

void insert_front(int x);
void insert_rear(int x);
void delete_front();
void delete_rear();
void display();

void insert_front(int x)
{
	if(front==(rear+1)%MAX)
		printf("Queue Overflow\n");
	else
	{
		(front==-1)?front=rear=0:front=(front-1+MAX)%MAX;
        printf("\n%d is inserted in DEQue\n",x);
		deque[front]=x;
	}
}

void insert_rear(int x)
{
	if(front==(rear+1)%MAX)
		printf("Queue Overflow\n");
	else
	{
		(front==-1)?front=rear=0: rear=(rear+1)%MAX;
		
        printf("\n%d is inserted in DEQue\n",x);
		deque[rear]=x;
	}
}

void delete_front()
{
	if(front==-1 && rear==-1)
		printf("Queue Underflow\n");
	else
	{
		printf("\n%d is deleted from DEQue\n",deque[front]);
		(front==rear)?front=rear=-1:front=(front+1)%MAX;
	}
}

void delete_rear()
{
	if(front==-1 && rear==-1)
		printf("Queue Underflow\n");
	else
	{
		printf("\n%d is deleted from DEQue\n",deque[rear]);
		(front==rear)?front=rear=-1:rear=(rear-1+MAX)%MAX;
	}
}

void display()
{
	if (rear<front)
		for(int i=front;i<=rear+MAX;i++)
			printf("%d\t",deque[i%MAX]);
	else
		for(int i=front;i<=rear;i++)
			printf("%d\t",deque[i]);
	printf("\n");
}  

int main()
{
	printf("\tMenu\n------------------------------\n1. Insert element from front \n2. Insert element from rear \n3. Delete element from front \n4. Delete element from rear \n5. Display DEQue\n6. Exit\n");
	int choice, x;
	while(1)
	{
		printf("------------------------------\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter element : ");
       		 scanf("%d", &x);
				insert_front(x);
				break;
			case 2:
				printf("Enter element : ");
       		 scanf("%d", &x);
				insert_rear(x);
				break;
			case 3:
				delete_front();
				break;
			case 4:
				delete_rear();
				break;
			case 5:
				display();
				break;
			case 6:
				exit(1);
			default:
				printf("Invalid choice\n");
		}
	}
	return 0;
}
