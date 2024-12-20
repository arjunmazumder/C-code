#include<stdio.h>
#include<conio.h>
void push();
void pop();
#define SIZE 10
int top,i,n;
int item;
int arry[SIZE];
int main()
{
    int choice;
    //printf("Enter the array size: ");
    //scanf("%d",&size);

    printf("\n How many values do you want to enter? : ");
    scanf("%d",&n);
    if(n>SIZE){
        printf("\nIt`s not possible!!: ");
    }
    else{
        for(i=1;i<=n;i++)
            scanf("%d",&arry[i]);
    }
    while(1){
    printf("\n perform operations on the stack.");
    printf("\n 1.push the element \n 2. pop the element \n 3. end ");
    printf("\n\n Enter the choice: ");
    scanf("%d",&choice);
    switch(choice){
      case 1:
        push();
        break;
      case 2:
        pop();
        break;
      case 3:
        exit(0);
      default:
        printf("\n Invalid choice!!");
    }
}
}
void push(){
    printf("\nEnter your push value: ");
    scanf("%d",&item);
    top = n;
   if(top == SIZE ){
     printf("\n Overflow!!");
   }
   else{
    top = top+1;
    arry[top] = item;
   }
   //n = n+1;
   for(i=1;i<=top;i++){
    printf("%d ",arry[i]);
   }
}
void pop(){
   top = n;
   if(top == 0){
    printf("Underflow!!");
   }
   else{
    printf("\n popped element: %d", arry[top]);
    printf("\n");
    top = top-1;
    for(i=1;i<=top;i++){
        printf("%d ",arry[i]);
    }



   }
}
