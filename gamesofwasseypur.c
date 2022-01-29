#include<stdio.h>
int main()
{
   int T,q;
   long  int i,N ,s =0;
   char temp , c[100000];
   scanf("%d",&T);


   for(q=0;q<T;q++)
   {
       scanf("%ld",&N);
       scanf("%s",&c);
       for (i = 0; i<N ; i++)
       {
           if(s[i]==s[i+1])
           {

           }
           else
           {
               s = s + 1;
           }
       }
       if(s%3==2)
   }
}