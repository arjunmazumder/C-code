#include<stdio.h>
int main()
{
    int a[]={2,3,4,1};
    float n1,n2,n3,n4,n5;
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
    float averag1 = (n1*a[0]+n2*a[1]+n3*a[2]+n4*a[3]) / (a[0]+a[1]+a[2]+a[3]);
    printf("Media: %0.1f\n",averag1);
    if(averag1>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(averag1<5)
    {
        printf("Aluno reprovado.\n");
    }
    else if(averag1>=5.0 && averag1<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f",&n5);
        printf("Nota do exame: %0.1f\n",n5);
        float averag2 = (averag1+n5)/2;
        if(averag2>=5.0)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %0.1f\n",averag2);
        }
        else if(averag2<=4.9)
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %0.1f\n",averag2);
        }
    }
    return 0;
}
