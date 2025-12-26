#include<stdio.h>
int main (){
    int num , i;
    long fact=1;
    printf("\n enter a number whose factorial you want to find");
    scanf("%d, &num");
    for(i=1; i<=num; i++)
    fact=fact*i;
    printf("\n the factorial is :%1d",fact);
    return 0;
}
