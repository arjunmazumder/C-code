#include<stdio.h>
int main()
{
    int ig,greg,n,mat=0,vi=0,vg=0,dr=0;
    while(1)
    {
        scanf("%d%d",&ig,&greg);
        mat++;
        printf("Novo grenal (1-sim 2-nao)\n");
        if(ig>greg)
        {
            vi++;
        }
        else if(greg>ig)
        {
            vg++;
        }
        else
        {
            dr++;
        }
        scanf("%d",&n);
        if(n==1)
        {
            continue;
        }
        else
        {
            break;

        }
    }

    printf("%d grenais\n",mat);
    printf("Inter:%d\n",vi);
    printf("Gremio:%d\n",vg);
    printf("Empates:%d\n",dr);
    if(vi>vg)
    {
        printf("Inter venceu mais\n");
    }
    else if(vi<vg)
    {
        printf("Gremio venceu mais\n");

    }
    else
    {
        printf("Não houve vencedor\n");
    }

    return 0;
}
