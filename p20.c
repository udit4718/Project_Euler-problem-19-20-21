#include <stdio.h>

void multiply(int *n,int i)
{
    int carry = 0, value;
    while(*n>=0)
    {
        value  = carry + *n * i;
        carry  = value / 10;
        *n = value % 10;

        *n++;
    }
    if(carry<10)
    *n++ = carry;
    else
    {  while(carry!=0)
      {int x=carry%10;
       carry=carry/10;
      *n++=x;
      }
    }
      *n = -1;
}

int sum(int *n)
{
    int sum=0;

    while(*n>=0)
        {
        printf("%d\n",*n);
        sum += *n++;
        }
    return sum;
}

int main(void)
{
    int arr[300] = {1, -1};
    int i;
    for(i=1; i<=100; i++)
        multiply(arr,i);
    printf("%d\n", sum(arr));
    return 0;
}
