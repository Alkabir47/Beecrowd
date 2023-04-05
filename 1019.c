#include<stdio.h>
int main ()
{
    int N,H=0,M=0,S=0;
    scanf("%d",&N);
    for (N;N>=3600; N-=3600,H++);
    for(N;N>=60;N-=60,M++);
    S+=N;
    printf("%d:%d:%d\n",H,M,S);
    return 0;
}
