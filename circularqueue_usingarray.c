#include<stdio.h>
#include<stdlib.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if(front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else if((rear+1)%N ==front)
    {
        printf("Queue is full ");
    }
    else 
    {
        rear = (rear+1)%N;
        queue[rear]=x;
    }

}
void dequeue()
{
    if(front == -1 && rear ==-1)
        printf("Queue is empty");
    else if(front==rear)
    {
        front = rear=-1;
    }
    else
    {
        printf("The element deleted is :");
        printf("%d",queue[front]);
        front = (front+1)%N;
        
    }

}
void display()
{
    int i = front;
    if (front==-1 && rear == -1)
    {
        printf("Queue  is empty ");
    }
    else
    {
    printf("\nQueue is :");
    while(i != rear)
    {
    printf("%d ",queue[i]);
    i = (i+1)%N;
    }
    printf("%d ",queue[rear]);
    }
}
int main()
{
    enqueue(89);
    enqueue(4);
    enqueue(5);
    enqueue(7);
    dequeue();
    display();
    return 0;


}