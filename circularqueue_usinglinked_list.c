#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node* next;
};

struct node *front = NULL;
struct node *rear = NULL;
void enqueue(int x)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = NULL;

if(front==NULL && rear==NULL)
{
    front=rear=newnode;
    rear ->next = front;
}
else
{
    rear->next = newnode;
    rear= newnode;
    rear->next = front;
}
}
void dequeue()
{
    struct node *temp;
    temp = front;
    if(front==NULL && rear == NULL)
        {
            printf("Underflow condition ");
        } 
    else if(front == rear)
    {
        front = rear = 0;
        free(temp);
    }
    else
    {
        front = front->next;
        rear->next = front;
        free(temp);
    }
}
 void display()
 {
     struct node* temp=front;
 if(front==NULL && rear == NULL)
 {
     printf("Queue is empty ");
 }
 else 
 {
     printf("The elements are :");
     while(temp->next!=front)
     {
         printf("%d ",temp->data);
         temp=temp->next;
     }
     printf("%d",temp->data);
 }
 }
 void peek()
 {
     if(front==NULL && rear == NULL)
        printf("Queue is empty ");
    else{
    printf("\nThe first element is :");
     printf("%d\n",front->data);
    }
 } 
 int main()
 {
     enqueue(23);
     enqueue(9);
     enqueue(3);
      peek();
     dequeue();
    
     display();
     return 0;
 }
 