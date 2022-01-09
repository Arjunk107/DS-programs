#include<stdio.h>
#include<stdlib.h>
#define N 10

int Cqueue[N];
int front=-1;
int rear=-1; 

void insert()
{
    int item;
    if((rear+1)%N==front)
    {
        printf("queue is full\n");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        printf("Enter the value\n");
        scanf("%d",&item);
        Cqueue[rear]=item;
    }
    else
    {
        printf("Enter the value: ");
        scanf("%d",&item);
        rear=(rear+1)%N;
        Cqueue[rear]=item;
    }
}

void delete()
{
    if(rear==-1 && front==-1)
    {
        printf("Queue is empty\n");
    }
    else if(rear==front)
    {
        printf("the deleted elment is %d",Cqueue[front]);
        rear=front=-1;   
    }
    else
    {
        printf("the deleted elment is %d",Cqueue[front]);
        front=(front+1)%N;
    }

}

void display()
{
    int i;
    if(rear==-1 && front==-1)
    {
        printf("The Queue is empty\n");
    }
    else
    {
        printf("Queue is :");
        for(i=front;i<=rear;i++)
        {
            printf("%d ,",Cqueue[i]);
        }
    }
}

void main()
{
    int choice;
    while(1)
    {
        printf("\n1. Insertion \n 2. Delete \n 3.Display \n 4.Quit \n");
        printf("Enter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
        }
    }
}








