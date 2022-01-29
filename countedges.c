#include<stdio.h>
#include<stdlib.h>
#define N 6
struct Node
{
    struct Node* head[N];
   int src, dest, weight;
    struct Node* next;
};
 
struct Node* createGraph(struct Node edges[10][10],int n)
{
   int src,dest, weight;
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    for(int i=0;i<N;i++)
    {
        node ->head[i] = NULL;

    }
    for(int i=0;i<n;i++)
    {
         src = edges[i]->src;
        dest = edges[i]->dest;
         weight = edges[i]->weight;
    
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->dest = dest;
    newnode->weight = weight;

    newnode->next = node->head[src];
    node ->head[src] = newnode;
       
    }
return node;
}
void print(struct Node* node)
{
    int count = 0;
    for(int i=0;i<N;i++)
    {
        struct Node* ptr = node->head[i];
        while(ptr!= NULL)
        {
            printf("%d-%d (%d)\t",i,ptr->dest,ptr->weight);
            count++;
            ptr = ptr -> next;
        }
        printf("\n");
    }
    printf("The number of edges in the weighted graph is %d",count);

}

int main()
{
    struct Node edges[10][10] = {
        {0,1,6},{1,2,7},{2,0,5},{3,2,10},{4,5,1}
        };
        int n = sizeof(edges)/sizeof(edges[0]);
        struct Node *node = createGraph(edges , n);
        print(node);
        return 0;
}