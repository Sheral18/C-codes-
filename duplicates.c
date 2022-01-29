#include<stdio.h>
int main()
{
    int i,j,k;
    char a[100];
    printf("\nEnter the string ");
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        for(j=i-1;a[i]!= '\0';i++)
        {
            if(a[j]==a[i])
            {
                for(k=j;a[k]!='\0';i++)
                {
                    a[k]=a[k+1];
                }
            }
        }
    }
    printf("\nfinal string after removing all duplicates %s",a);
    return 0;
    
}