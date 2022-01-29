#include <stdio.h>
#include <stdlib.h>

struct AjlistNode
{
    int vId;//Vertices id
    struct AjlistNode*next;
};

struct Graph
{
    int data; //node key value
    struct AjlistNode*next;
};

void setData(struct Graph *);
int size; //number of nodes

//set node key value
void setData(struct Graph*node)
{
  if(node!=NULL && size>0)
  {
    int index=0;
    for(index;index<size;index++)
    {
        //set vertic node data
        node[index].data=index;//set node key
        //Initial no AjlistNode
        //set NULL Value
        node[index].next=NULL;
    }
  }else{
      printf("Vertic Node is Empty");
  }
}

void connectEdge(struct Graph*node, int V ,int E)
{
 
  // create Adjacency node
  struct AjlistNode *newEdge=(struct AjlistNode*)malloc(
      sizeof(struct AjlistNode)
  );
  if(newEdge!=NULL)
  {
                  
      newEdge->next=NULL;
      newEdge->vId=E;

      struct AjlistNode *temp=node[V].next;

      if(temp==NULL)
      {
        node[V].next=newEdge;

      }else
      {
          //Add node at last
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }      
        temp->next=newEdge;          
      }
  }else
  {
    printf("\n Memory overflow");
  }
}
//Add Edge from Two given Nodes
void addEdge(struct Graph*node, int V ,int E)
{
    //add edge form V to E
    //V and E is Node location
    if(V<size && E <size)
    {
        if(V==E)
        {
          //self loop
          connectEdge(node,V,E);
          return;
        }
      connectEdge(node,V,E);
      connectEdge(node,E,V);

    }else
    {
      //not valid Vertices
      printf("Invalid Node Vertices %d  %d", V,E);
    }
}

//Display Adjacency list of vertex
void printGraph(struct Graph*node)
{
    if(node!=NULL)
    {
      struct AjlistNode *temp=NULL;
      for(int index=0; index < size; index++)
      {
        printf("\n Adjacency list of vertex %d  :",index);
        temp=node[index].next;
        while(temp!=NULL)
        {
            //temp->vId is graph node vertices
            //in this case temp->vId is same as 
            //node[temp->vId].data
            
            printf("  %d",node[temp->vId].data);
            temp=temp->next;
        }
      }
    }else
    {
      printf("Empty Graph");
    }
}
//Count number of edges
void countEdge(struct Graph*node)
{
    if(node!=NULL)
    {
      struct AjlistNode *temp=NULL;

      int counter=0,self_loop=0;

      for(int index=0;index<size;index++)
      {
        
        temp=node[index].next;
        while(temp!=NULL)
        {
          if(temp->vId==index)
          {
            //when self loop
            self_loop++;
          }else
          {
             counter++; 
          }
          //counter edge
          temp=temp->next;
        }
      }
      printf("\nTotal Edges : %d\n",(counter/2)+self_loop );
    }else
    {
        printf("Empty Graph");
    }
}

int main()
{
    
    size=6;

    struct Graph*node=(struct Graph*)malloc( 
      sizeof(struct Graph)*size );
    
    if(node==NULL)
    {
      printf("\n Memory overflow");

    }
    else
    {
        //First set node keys
        setData(node); 
        //Connected two node with Edges

        addEdge(node,0,1);
        addEdge(node,0,3);
        addEdge(node,0,5);
        addEdge(node,1,4);
        addEdge(node,1,5);
        addEdge(node,2,3);
        addEdge(node,3,5);
        addEdge(node,4,4);
        addEdge(node,4,5);
        addEdge(node,5,5);
        printGraph(node);
        countEdge(node);
    }  


  return 0;
}