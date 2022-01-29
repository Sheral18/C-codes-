#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node *root = NULL;
/*
void insert(int data)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    struct node *current;
    struct node *parent;
    temp ->data = data;
    temp->left = NULL;
    temp->right = NULL;
 if(root==NULL)
 {
 root=temp;
 }
else
{
    current = root;
    parent = NULL;
    

while(1)
{
    parent = current;
    if(data<parent->data)
    {
        current = current->left;
        if(current==NULL)
        {
            parent->left = temp;
            return ;
        }
    }
    else{
        current = current->right;
        if(current==NULL)
        {
            parent->right = temp;
            return ;
        }
    }
}
}
}
*/
struct node *create(int item)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->data=item;
}
void insert(struct node* root,struct node* newnode)
{
    if(newnode->data<root->data)
{
if(root->left!=NULL)
insert(root->left,newnode);
else
root->left=newnode;
}
if(newnode->data>root->data)
{
    if(root->right!=NULL)
insert(root->right,newnode);
else
root->right=newnode;
}
}
void inorder(struct node* root)
{
    if(root!=NULL)
    {
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
    }
}
void preorder(struct node* root)
{
    if(root!=NULL)
    {
    printf("%d ",root->data);
    preorder(root->left);
    
    preorder(root->right);
    }
}
void postorder(struct node* root)
{
    if(root!=NULL)
    {
    postorder(root->left);
   
    postorder(root->right);
     printf("%d ",root->data);
    }
}

int main()
{
    struct node* temp;
    int i;
  //  int arr[10]= {27,14,29,10,19,28,35};
  //  for (int i=0;i<7;i++)
  //  {
 //   insert(root,temp);
  //  }
    root=create(45);
    root->left=create(34);
    root->left->left=create(28);
    root->left->right=create(39);
    root->right=create(50);
    root->right->left = create(40);
    root->right->right=create(60);
    insert(root,temp);
    printf("\nPreorder traversal: ");
    preorder(root);

    printf("\nInorder traversal:");
    inorder(root);

    printf("\nPostorder traversal :");
    postorder(root);
    return 0;


}