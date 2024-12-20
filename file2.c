#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fpointer;
    fopen("anil.text","w");
    if(fpointer == NULL){
        printf("Unable to create or open the file ");
    }
    else{
        printf("data write to the file successfully");
        fclose(fpointer);
    }
    getch();
    return 0;
}
