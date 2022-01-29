#include<stdio.h>
#include<stdlib.h>

struct node {
  int data;
  struct node *next;
};

void insert(int item)
{
struct node *1;
newNode1 = malloc(sizeof(struct node));
newNode1->data = item;
newNode1->next = NULL;

struct node *temp = head;
while(temp->next != NULL){
  temp = temp->next;
}

temp->next = newNode1;

}
void display()
{
struct node *temp = head;
printf("\n\nList elements are - \n");
while(temp != NULL) {
  printf("%d --->",temp->data);
  temp = temp->next;
}
void mul()
{
    while(temp != NULL) {
 
     printf("%d -> ", temp3->data = temp1->data*temp2->data);
      temp3 = temp3->next;
      temp3 = temp3->next;
    temp2 = temp2->next;



}