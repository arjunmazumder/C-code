#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *buffer;
    buffer = (char *)malloc(10);
    if(buffer == NULL)
    {
        printf("malloc faild.\n");
        exit(1);
    }
    printf("\nBuffer of size %d created.",_msize(buffer));
    strcpy(buffer,"hyderabad arjunmazumder");
    printf("\nbuffer contains : %s",buffer);
    buffer=(char *)realloc(buffer,15);
    if(buffer==NULL)
    {
        printf("\nReallocation faild.\n");
        exit(1);
    }
    printf("\nbuffer new Size is = %d",_msize(buffer));
    printf("\nbuffer still contain : %s ",buffer);
    strcpy(buffer, "Sanjida i love you. you are my jan, my oxigen.");
    printf("\nbuffer new contain :%s ",buffer);
    free(buffer);
    if(buffer==NULL)
    {
        printf("\n\nFree: %s",buffer);
    }

}
