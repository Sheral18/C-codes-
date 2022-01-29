#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* root = NULL;

struct node* create(int item)

{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->left=NULL;
    newnode->right = NULL;
    newnode->data = item;
     }
void preorder(struct node* root)
{
    
    if(root==NULL)
        return;
    else
    {
       
        printf(" %d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }

}
void swap( struct node* root)
{
    if(root==NULL)
        printf("The tree is empty");
    else
    {
        struct node* temp = root->left;
        root->left = root->right;
        root->right= temp;

    }
}
void invertbinary(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    
        swap(root);
        invertbinary(root->left);
        invertbinary(root->right);
        

    

}
int main()
{
    struct node* root=create(1);
    root->left=create(2);
    root->right=create(3);
    root->left->left=create(4);
    root->left->right=create(5);
    root->right->left=create(6);
    root->right->right=create(7);
    invertbinary(root);
    printf("The inverted order is :");
    preorder(root);
    
    return 0;
}