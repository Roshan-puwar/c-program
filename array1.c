#include<stdio.h>
int main(){
    int i,sum=0.0 ,avg ;
    float arr[5]
    printf("enter the 5 subject:");
    for ( i=0; i<5; i++)
    {
        scanf("%f",&arr[i]);

    }
    for (i=0; i<5; i++){
        sum+=arr[i];

    }
     avg= sum/5;
     printf("average=%f\n",avg);
     printf("sum=%f\n)
    
}