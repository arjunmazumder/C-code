#include<stdio.h>
int main()
{
    int n;
    float count=0,sum=0;
    while(1)
    {
        scanf("%d",&n);
        if(n<0)
        {
            break;
        }
        count++;
        sum=sum+n;
    }
    float avrg=sum/count;
    printf("%.2f\n",avrg);
    return 0;
}

