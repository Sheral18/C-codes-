#include<stdio.h>
#include<malloc.h>
#include<string.h>

struct Tree
{
    int element ;
    struct Tree *left;
    struct Tree *right;
};
typedef struct Tree* TREE;

TREE create_tnode(int element , TREE left, TREE right)
{
    TREE tree = (TREE)malloc(sizeof(struct Tree));
    tree->element = element ;
    tree ->left = left;
    tree ->right = right;
    return tree;
}
TREE insert(TREE tree,int element)
{
    if(tree == NULL)
    {
        return create_tnode(element ,NULL,NULL);
    }
    else if(element > tree->element)
    {
        tree -> right = insert(tree->right,element);

    }
    else if(element < tree-> element)
    {
        tree -> left = insert(tree->left,element);
    }
    else
    {

    }
    return tree;
}

TREE destroy(TREE tree)
{
    if(tree != NULL)
    {
        destroy(tree->left);
        destroy(tree->right);
        free(tree);
    }
    return NULL;
}
struct List{
    int element;
    struct List *next;
    struct List *prev;
};
typedef struct List* LIST;
LIST create_node(int element,LIST next ,LIST prev)
{
    LIST list = (LIST)malloc(sizeof(struct List));
    list->element  = element;
    list->next = next;
    list -> prev = prev;
    return list;

}

void vsum_list(TREE tree,LIST node)
{
    if(tree ==  NULL)
    {
    return ;
    }
    print_infix(tree->left);
    printf()

}