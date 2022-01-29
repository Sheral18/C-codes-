#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define N 10

int count =0;
int s1[N],s2[N];
int top1 =-1,top2=-1;
int a,b;

void push1(int x1)
{
    if(top1==N-1)
        printf("Overflow");
    else {
        top1++;
        s1[top1]=x1;      
    }
}

void push2(int x2)
{
    if(top2==N-1)
        printf("Overflow");
    else
        {
            top2++;
            s2[top2]=x2;
            
        }
}

void enqueue(int x)
{
    push1(x);
    count++;
    
}
int pop1()
{
    return s1[top1--];
}
int pop2()
{
    return s2[top2--];
}
void dequeue()
{
    int a,b;
    if(top1== -1 && top2== -1)
    {
        printf("Queue is empty");
    }
    else {
        for(int i=0;i<count;i++)
            {
                a = pop1();
                push2(a);
                
            }
    }
    b=pop2();
    printf("%d",b);
    count--;
    for(int i=0;i<count;i++)
    {
        push1(a);
    }
}
void display()
{
    for (int i=0;i<top1;i++)
    {
        printf("%d",s1[i]);
        
    }
}
int main() {
int data,n;
int choice;
scanf("%d",n);
for (int i=0;i<n;i++)
{
    scanf("%d",&choice);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
      if(choice==1)
      {
          scanf("%d",&data);
          enqueue(data);
      }
        
        
        else if(choice==2)
        {
        dequeue();
        }
        
        
        else if(choice ==3)
         {
                
        display();
        }
        
    
}  
    
       
    return 0;
}
