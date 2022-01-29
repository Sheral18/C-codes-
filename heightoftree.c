#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* root = NULL;
int maxDepth(struct node* newnode)
{
    if(newnode==NULL)
        return -1;
    else
    {
        int ldepth = maxDepth(newnode->left);
        int rdepth = maxDepth(newnode->right);
        if(ldepth>rdepth)
        return (ldepth + 1);
        else
        return(rdepth+ 1);

    }
}
struct node* create(int item)
{
    struct node* newnode =(struct node*)malloc(sizeof(struct node));
    newnode->data= item;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;

}
int main()
{
    struct node* root=create(1);
    root->left = create(2);
    root->left->left = create(3);
    root->left->right = create(6);
    root->right = create(7);
    printf("%d",maxDepth(root));
    return 0;

}
