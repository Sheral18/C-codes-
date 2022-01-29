#include<stdio.h>
int findXOR(int n)
{
    int mod = n % 4;
    if(mod == 0)
        return n;
    else if(mod == 1)
        return 1;
    else if(mod == 2)
        return n+ 1;
    else if(mod == 3)
        return 0;
}
int findXOR(int l , int r)
{
    return (findXOR(l-1)^findXOR(r));
}
int main()
{
    int l=4,r=8;
    printf("%d",findXOR(l,r));
    return 0;
}