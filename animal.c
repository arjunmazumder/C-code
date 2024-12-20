#include<stdio.h>
int main()
{
    char vert[]="vertebrado";
    char ave[]="ave";
    char carn[]="carnivoro";
    char oni[]="onivoro";
    char mami[]="mamifero";
    char oniv[]="onivoro";
    char herb[]="herbivoro";
    char ins[]="inseto";
    char hema[]="hematofago";
    char herbi[]="herbivoro";
    char anel[]="anelideo";
    char hemat[]="hematofago";
    char onivo[]="onivoro";
    char name1[15], name2[15], name3[15];
    gets(name1);
    gets(name2);
    gets(name3);
    if(!strcmp(name1,vert))
    {
        if(!strcmp(name2,ave))
        {
            if(!strcmp(name3,carn))
            {
                printf("aguia\n");
            }
            else
            {
                printf("pomba\n");
            }
        }
        else
        {
            if(!strcmp(name3,oniv))
            {
                printf("homem\n");
            }
            else
            {
                printf("vaca\n");
            }
        }
    }
    else
    {
        if(!strcmp(name2,ins))
        {
            if(!strcmp(name3,hema))
            {
                printf("pulga\n");
            }
            else
            {
                  printf("lagarta\n");
            }

        }
        else
        {
            if(!strcmp(name3,hemat))
            {
                printf("sanguessuga\n");
            }
            else
            {
                printf("minhoca\n");
            }


        }
    }
    return 0;

}
