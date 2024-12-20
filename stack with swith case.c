#include<stdio.h>
#include<conio.h>
#define SIZE 4
int TOP = -1;
int inp_array[SIZE];
void push();
void pop();
void show();
int main(){
    int choice;
    while(1)
    {
        printf("\nPerform operation on the stack:");
        printf("\n1. push the element\n 2.pop the elements\n 3.show the elements\n 4.End");
        printf("\n\nEnter the choice.");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);
        default:
            printf("\n Invalid choice!!");
        }
    }

}
void push()
{
    int x;
    if(TOP == SIZE-1)
    {
        printf("\n overflow!!");
    }
    else
    {
        printf("Enter the element to be add into the stack.");
        scanf("%d",&x);
        TOP = TOP+1;
        inp_array[TOP] = x;
    }
}
void pop()
{
    if(TOP == -1)
    {
       printf("\n Underflow!!");

    }
    else
    {
        printf("\n popped element : %d ",inp_array[TOP]);
        TOP = TOP -1;
    }
}
void show()
{
    if(TOP == -1)
    {
        printf("Underflow!!");
    }
    else
    {
        printf("\nElements present in the stack");
        for(int i=TOP;i>= 0;i--);
    }
}

