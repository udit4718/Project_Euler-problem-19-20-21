#include<stdio.h>
void main()
{
  long long i,j,k;
  long long sum=0;
  for(i=4;i<10000;i++)
  {   long long count=0,count1=0;
      for(k=1;k<=i/2;k++)
      {
        if(i%k==0)
        count+=k;
      }
    if(count<10000)
    {
       for(k=1;k<=count/2;k++)
        {
         if(count%k==0)
         count1+=k;
        }
          if(count1==i&&count1!=count)
           sum+=i;
     }
   }

   printf("%lld",sum);
}
