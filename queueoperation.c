#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#define MAX 50
int insert();
int dequeue();
int display();
int queue_array[MAX];
int rear=-1;
int front=-1;
int main()
{
	int choice;
	while(1)
	{
		printf("1.insert element to queue\n");
		printf("2.delete elements from queue \n");
		printf("3.display all elements of queue\n");
		printf("4.exit\n");
		printf("enter the choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insert();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
				default:
					printf("wrong choice\n");
				
		}
	}
}
int insert()
{
	int item;
	if(rear==MAX-1)
	printf("queue overflow\n");
	else
	{
		if(front==-1)
		front==0;
		printf("insert elements in queue");
		scanf("%d",&item);
		rear=rear+1;
		queue_array[rear]=item;
	}
}
int dequeue()
{
	if(front==-1 || front>rear)
	{
	    printf("queue overflow\n");
		return 0;
    }
	else
	{
		printf("enter deleted from queue is :%d\n",queue_array[front]);
		front=front+1;
	}
}
int display()
{
	int i;
	if(front==-1)
	printf("queue is empty");
	else
	{
		printf("queue is : \n");
		for(i=front;i<rear;i++)
		printf("%d",queue_array[i]);
		printf("\n");
	}
}

