#include<stdio.h>
#include<ctype.h>
int main()
{
    int c[20],r[20],s[20],n,i,value;
    int cCount=0,cTotal=0,rCount=0,rTotal=0,sCount=0,sTotal=0,total;
    char name,ch='%';
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %c",&value, &name);
        if(toupper(name) == 'C')
        {
            c[cCount]=value;
            cTotal=cTotal+c[cCount];
            cCount++;
        }
        if(toupper(name) == 'R')

        {
           r[rCount]=value;
            rTotal=rTotal+r[rCount];
            rCount++;
        }
        if(toupper(name) == 'S')
        {
            s[sCount]=value;
            sTotal=sTotal+s[sCount];
            sCount++;
        }
    }
    total=cTotal+rTotal+sTotal;
    float pc=((float)cTotal/total)*100;
    float pr=((float)rTotal/total)*100;
    float ps=((float)sTotal/total)*100;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",cTotal);
    printf("Total de ratos: %d\n",rTotal);
    printf("Total de sapos: %d\n",sTotal);
    printf("Percentual de coelhos: %.2f %c\n", pc, ch);
    printf("Percentual de ratos: %.2f %c\n", pr, ch);
    printf("Percentual de sapos: %.2f %c\n", ps, ch);

    return 0;
}
