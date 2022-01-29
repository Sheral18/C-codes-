#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void push(char);
char pop();
char s[50]={'\0'};
int top = -1;
void push(char ele)
{
    top++;
    s[top]=ele;
    
}
char pop()
{
    char ele;
    ele = s[top];
    s[top]='\0';
    top--;
    return ele;
}
int main()
{
    int i,len;
    char str[50]={'\0'};
    printf("enter string");
    scanf(" %s",str);
    len = strlen(str);
    i =0;
    while(i<len)
    {
        push(str[i]);
        i++;
    }
    i=0;
    while(i<len)
    {
        if(str[i]!=pop())
        {
            
            break;
            i++;
        }
    }
        if(i==len)
        {
            printf("Palindrome");
        } 
        else
        {
            printf("Not palindrone");
        }
    
}