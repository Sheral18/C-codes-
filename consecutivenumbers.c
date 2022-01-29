#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front;
struct node *rear;
struct node *q=(struct node)malloc(sizeof(struct node));
struct node* head;
struct node *dequeue(struct node* q)
{
    struct node *q;
    q=front;
    front = front->next;
    free(q);
}
void isemptyqueue(struct node *q)
{
    if(q==NULL)
    return;
}
void isemptystack(struct node* s)
{
    if(head==NULL)
    return ;
}
void push(struct node* s,dequeue(struct node *q))
{
    if(head==NULL)
    {
    s->data=dequeue(q);
    s->next=NULL;
    head=s;
    }
    else
    {
        s->data=dequeue(q);
        q->next = head;
        head = q;
    }
}
void pop(struct node *s)
{
    int item;
    s=head;
    head=head->next;
    free(q);

}
struct node *enqueue(struct node *q,int n)
{
    printf("Enter value ");
    scanf("%d",&n);
    q->data=n;
    if(front==NULL)
    {
        front=q;
        rear =q;
        front->next = NULL;
        rear->next = NULL;
    }
    else
    {
        rear->next =q;
        rear =q;
        rear->next = NULL;
    }

}

int checkstackpairwiseorder(struct stack *s)
{
    struct node *q = create();
    int pair =1;
    while(!isemptystack(s))
    {
        enqueue(q,pop(s));
        while(!isemptyqueue(q))
            push(s,dequeue(q));
        int n=pop(s);
        enqueue(q,n);
        if(!isemptystack(s))
        {
            int m = pop(s);
            enqueue(q,m);
            if(abs(n-m)!=1)
            {
                pair=0;
            }

        }
    }
    while(!isemptyqueue(q))
    {
    push(s,dequeue(q));
    return pair;
    }
}
int main()
{
    struct node *s;
    struct node *root = enqueue(q,1);
    root = enqueue(q,2);
    root = enqueue(q,3);
    root = enqueue(q,4);
    root = enqueue(q,5);

    checkstackpairwiseorder(s);

    return 0;
    
}