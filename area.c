#include<stdio.h>
int main()
{
    double A,B,C;
    const double pi = 3.14159;
    scanf("%lf%lf%lf", &A, &B, &C);
    double TRIANGULO = 0.5*A*C;
    double CIRCULO = pi*C*C;
    double TRAPEZIO = 0.5*(A+B)*C;
    double QUADRADO = B*B;
    double RETANGULO = A*B;
    printf("TRIANGULO: %.3lf\n",TRIANGULO);
    printf("CIRCULO: %.3lf\n",CIRCULO);
    printf("TRAPEZIO: %.3lf\n",TRAPEZIO);
    printf("QUADRADO: %.3lf\n",QUADRADO);
    printf("RETANGULO: %.3lf\n",RETANGULO);
    return 0;
}
