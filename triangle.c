#include<stdio.h>
int main()
{
    float A,B,C,area,perimetro;
    scanf("%f%f%f",&A,&B,&C);
    if(A+B> C && B+C>A && C+A>B)
    {
        perimetro=A+B+C;
        printf("Perimetro = %0.1f\n",perimetro);
    }
    else
    {
        area= .5*(A+B)*C;
        printf("Area = %0.1f\n",area);
    }

}
