#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,*table;
    int size;
    printf("\nWhat is the size of Table: ");
    scanf("%d",&size);
    table = (int *) malloc(size*sizeof(int));
    if(p == '\0')
    {
        printf("\nNo space available\n");
        exit(1);
    }
    printf("Address of the first byte is : %d",table);
    printf("\nInput table values: ");
    for(p=table; p<table+size; p++)
    {
        scanf("%d",p);

    }
    for(p=table;p<table+size;p++)
    {
        printf("\n%d is stored at address : %d\n",*p,p);
    }
return 0;
}
