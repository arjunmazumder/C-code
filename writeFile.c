#include<stdio.h>
int main()
{
    FILE *ptr;
    char c;
    ptr=fopen("arjun.txt", "w");
    while((c=getc(ptr)) != EOF)
    {
        printf("%c",c);

        //putchar(c);
    }
    fclose(ptr);

    return 0;
}
