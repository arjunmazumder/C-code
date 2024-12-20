#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(void)
{
    FILE *fp;
    char str[50];
    int a = 10;
    char ch = 's';
    int i;
    fp = fopen("abc.txt","a");
    printf("Enter the string: ");
    gets(str);
    fprintf(fp,"%d %s %c",a,str,ch);
    fclose(fp);
    fp = fopen("abc","r");
}
