#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* root1 = NULL;
struct node* root2 = NULL;
int arr1[7],arr2[7];
struct node* create(int item)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->left = NULL;
    newnode->right= NULL;
    return newnode;
}

void inorder1(struct node* root1)
{
  static  int i=0;
  if(root1==NULL)
  return ;
  else
   {
    inorder1(root1->left);
    inorder1(root2->left);
    if(root1->data!=root2->data)
    printf("not equal");
    else
   // continue;
    printf("equal");
    inorder1(root1->right);
 //   inorder2(root2->right);
    
   }
   

}
/*void inorder2(struct node* root2)
{
   static int i=0;
   if(root2==NULL)
   return ;
   else
  {
    inorder2(root2->left);
    arr2[i++]=root2->data;
    inorder2(root2->right);
  }

}
*/
int main()
{
  int flag=0;
     root1=create(1);
     root1->left=create(4);
     root1->left->left=create(3);
     root1->left->right=create(5);
     root1->right=create(7);
     root1->right->left = create(6);
     root1->right->right=create(8);

     root2=create(1);
     root2->left=create(4);
     root2->left->left=create(3);
     root2->left->right=create(9);
     root2->right = create(7);
     root2->right->left = create(6);
     root2->right->right=create(8);
     
  
  //  printf("Identical\n");
    inorder1(root1);

 //  inorder2(root2);
 /*  for(int i=0;i<6;i++)
    {
        printf("%d\t",arr1[i]);
    }
    */
  /*  for(int i=0;i<6;i++)
    {
        printf("%d\t",arr2[i]);
    }
  */ 
  /*  for(int i=0;i<6;i++)
    { 
       if(arr1[i]==arr2[i])
        flag=1;
            
        else  
            flag=0;  
            break; 
    
    }
   
    if(flag==0)
    printf("\nNot identical");
    else
    printf("\nIdentical");
    */
    return 0;

}