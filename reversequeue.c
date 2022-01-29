#include<stdio.h>
#include<stdlib.h>
#define N 10
int q[N];
int f=-1;
int r=-1;
void enqueue(int data,int n)
{
    if(r==N-1)
    {
        printf("Queue is full");
    }
    else if((f==-1) && (r==-1))
        {
            f = r = 0;
            q[r]= data;
        }
    else
    {
        r++;
        q[r]=data;
    }
}
void print()
{
    
    for(int i=f;i<=r;i++)
    {
        printf("\n%d",q[i]);
    }
}
void reverse()
{
    int i,j,t;
    for(i=f,j=r;i<j;i++,j--)
        {
            t = q[i];
            q[i] = q[j];
            q[j]=t;
        }
}
int main()
{
    int n,i=0,t;
    printf("Enter size of queue");
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d",&t);
        enqueue(t,n);
        i++;

    }
    printf("the queue u have entered is :");
    print();
    printf("\nQueue after reversing is ");
    
    reverse();
    
    print();

}