#include <stdio.h>

int main() {
 float a,b,c;
 int p ;
 scanf("%f",&a);
 if (a>0 && a<=400.00){ 
    b= (a*15)/100;
    c=(a+b);
    p=15;
 } else if (a>400.01 && a<=800.00)
 { 
    b= (a*12)/100;
    c=(a+b);
    p=12;
 }else if (a>800.01 && a<=1200.00)
 { 
    b= (a*10)/100;
    c=(a+b);
    p=10;
 } else if (a>1200.01 && a<=2000.00)
 { 
    b= (a*7)/100;
    c=(a+b);
    p=7;
 }else if(a>2000.00 )
 { 
    b= (a*4)/100;
    c=(a+b);
    p=4;
 }
 printf("Novo salario: %.2f\n",c);
 printf("Reajuste ganho: %.2f\n",b);
 printf("Em percentual: %d %%\n",p);

    return 0;
}
