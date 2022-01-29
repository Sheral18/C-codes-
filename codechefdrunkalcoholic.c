#include<stdio.h>
int main()
{
    int t,k[10];
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&k[i]);
        
    }
    for (int i=0;i<t;i++)
    {
        if(k[i]%2==0)
        printf("%d\n",k[i]);
        else
        printf("%d\n",k[i]+2);
    }
    return 0;
}