#include<stdio.h>
int main(){
    int i,n;
    int small,large, a[50];
    printf ("enter the value of n:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("\n enter the %d the element :", i+1);
        scanf5("%d",&a[i]);
    }
    printf("\n The element in the array are:");
    for (i=0; i<n; i++)
    printf ("\t%d ",a[i]);
    small=a[0];
    large=a [0];
    for (i=1; i<n; i++)
    {
        if (a[i]<small)
        small=a[i];
        if (a[i]>large)
        large=a[i];


    }
    printf("\n the smallest element =%d and largest elements =%d" ,small ,large);
    return 0;

}