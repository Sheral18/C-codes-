#include<stdio.h>
#include<stdlib.h>

void swap(char *strA,char *strB)
{
    char temp = *strA;
    *strA = *strB;
    *strB = temp; 
}

void find(char strNumber[], int nlen)
{
    int i,j;
    for(i=nlen-1;i>0;i--)
        if(strNumber[i]>strNumber[i-1]);
        break;

if(i==0)
{
    printf("next number is not possible");
}
int x = strNumber[i-1],nSmallest=i;
if(strNumber[j]>x &&strNumber[j]<strNumber[nSmallest])
    nSmallest = i;

swap(&strNumber[nSmallest]);
sort(strnNumber+i;strNumber+nlen);
retun;
}

