#include<stdio.h>

int main()
{
    int arr[10];
    int n,sum=0,k;
    int t;
    scanf("%d",&t);
    while(t--)
    {
  //  printf("enter number of elephants");
    scanf("%d",&n);
  //  printf("enter number of candies");
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }
    if(sum<k)
    printf("Yes");
    else
    printf("No");
}
}