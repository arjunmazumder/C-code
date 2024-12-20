#include<stdio.h>
int main()
{
    double a[3];
    int i,j,k;
    for(i=0;i<3;i++)
    {
        scanf("%lf",&a[i]);
    }
    for(i=0;i<3-1;i++)
    {
        for(j=k=i;j<3;j++)
        {
            if(a[j]>a[k])
            {
                k=j;
            }
        }

        double emty=a[k];
        a[k]=a[i];
        a[i]=emty;

    }
    if(a[0]>=(a[1]+a[2]))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
    if(a[0]*a[0] == a[1]*a[1] + a[2]*a[2])
    {
        printf("TRIANGULO RETANGULO\n");
    }
    if(a[0]*a[0] > a[1]*a[1] + a[2]*a[2])
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if(a[0]*a[0] < a[1]*a[1] + a[2]*a[2])
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a[0]==a[1]&&a[0]==a[2])
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if((a[0]==a[1] && (a[0]!=a[2])) || ((a[1]==a[2])&& a[1] !=a[0]) || ((a[2]==a[0]) && a[2] !=a[1]))
    {
            printf("TRIANGULO ISOSCELES\n");
    }
    }
    return 0;

}
