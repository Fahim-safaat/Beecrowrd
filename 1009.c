#include<stdio.h>
int main(){
char a[100];
double b,c,x,f = 0.15;
scanf("%s %lf %lf", a,&b,&c);
x = b + (c*f);
printf("TOTAL = R$ %.2lf\n", x);
return 0;
}
