#include<stdio.h>
int main()
{
    int n,i;
    float num1,num2,num3,aver;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%f%f%f",&num1,&num2,&num3);
        aver=num1*2+num2*3+num3*5;
        printf("%.1f\n",aver/10);


    }
    return 0;

}
