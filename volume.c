#include<stdio.h>
#include<conio.h>
void main ()
{
    int l , b ,h , v;
    printf("enter the length");
    scanf("%d",&l);
    printf("enter the breath");
    scanf("%d",&b);
    printf("enter the height");
    scanf("%d",&h);
    v = (l*b*h);
    printf("volume of cuboid is : %d\n",v);
    getch();
}