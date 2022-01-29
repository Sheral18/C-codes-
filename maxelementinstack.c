#include<stdlib.h>
#include<stdio.h>
#define MAX 10
int top=-1;
int stack[MAX];
void push(int item)
{
    if(top==MAX-1)
        printf("Stack is full");
    else {
    
    top= top + 1;
    stack[top]=item;
    }
}
void pop()
{
    if(top==-1)
        printf("Stack is empty");
    else {
    top=top-1;
    }
    
}
void display()
{
    int max=stack[0];
    if(top==1)
    {
        printf("%d",stack[top]);
        
    }
    else {
    
    for(int i=1;i<stack[i];i++)
    {
       if(max<stack[i]) 
       {
        printf("%d ",stack[i]);
        
       }
    }
    }
}
int main(void)
{
    int item;
     int choice;
     int n;
     scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                push(item);
                scanf("%d\t",&item);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
                
        }
    }
}