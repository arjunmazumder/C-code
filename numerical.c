#include<stdio.h>
#include<math.h>
double function(double d)
{
    double x;
    return x*x*x-x-1;
}
double FalsePosition(double a, double b)
{
    double c;

    c=(a*function(b)-b*function(a))/(function(b)-function(a));
    while(fabs(function(c)>=0.0001))
    {
        c=(a*function(b)-b*function(a))/(function(b)-function(a));
        if(function(c)==0)
        {
            break;
        }
        else if((function(a)*function(c))<0){
            b=c;
        }
        else if((function(b)*function(c))<0){
            a=c;
        }
        printf("%lf\n",c);
    }
    return c;
}
int main()
{
    double a=1,b=2;
    printf("%lf",FalsePosition(a,b));

}


