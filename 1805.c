#include<stdio.h>
#include<math.h>
int main ()
{
    long long int i= pow(10,9);
    long long int A,B,x,y,z;
    scanf("%lld %lld",&A,&B);
    if (1<=A<=B<=i)
    {
       x=(B*(B+1))/2;
       y=(A*(A-1))/2;
       z=x-y;
       printf("%lld\n",z);
    }
    return 0;
}
