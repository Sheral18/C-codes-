#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left,*right;
};
int s;
struct node *create(int item)
{
    struct node *newnode = malloc(sizeof(struct node));
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->data  = item;
    return newnode;
}
int getsum(struct node* root);
int getsumAlternate(struct node* root)
{
    if(root == NULL)
    return 0;

    int sum = root->data;

    if(root->left != NULL)
    {
        sum += getsum(root->left->left);
        sum += getsum(root->left->right);
    }
    if(root->right != NULL)
    {
        sum += getsum(root->right->left);
        sum += getsum(root->right->right);

    }
    return sum;
}

int getsum(struct node* root)
{
    if(root==NULL)
        return 0;
    if(getsumAlternate(root)>getsumAlternate(root->left)+getsumAlternate(root->right))
    return(getsumAlternate(root));
    
   
    return(getsumAlternate(root->left)+getsumAlternate(root->right));
    

    
}
int main()
{
    struct node* root;
    root= create(25);
    root->left = create(15);
    root->left->left = create(10);
    root->right = create(30);
    root->right->left = create(26);
    printf("%d",getsum(root));
    return 0;
}