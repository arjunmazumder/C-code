#include<stdio.h>
#include<string.h>
struct complex
{
    double real;
    double img;
//    struct complex sum(struct complex c1, struct complex c2);
};
struct complex sum(struct complex c1, struct complex c2)
{
    struct complex c3;
    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
    print
    f("%lf",c3);
    return (c3);
};
int main()
{
    struct complex a={3.25,4.56};
    struct complex b={6.325,4.325};

   //double p=1.452,q=59.368;
  printf("%lf ", sum(a,b));
 //sum(q);


// double result=a.sum(5.000,6.000);
//printf("%lf",result);


    return 0;
}
