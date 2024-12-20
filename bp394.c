#include<stdio.h>
int main()
{
    FILE *ptr;
    char c;
    printf("Data Input: \n");
    ptr=fopen("arjun.txt","w");
    while((c=getchar()) != EOF)
    {
        putc(c,ptr);

    }

    fclose(ptr);
    printf("\n\nData OutPut\n");
    ptr=fopen("arjun.txt", "r");
    while((c=getc(ptr)) != EOF)
    {
        printf("%c",c);
    }
    fclose(ptr);
    return 0;
}
