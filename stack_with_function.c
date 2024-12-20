#include<stdio.h>
int MAXSIZE = 10;
int stack[10];
int top = -1;
/* check if the stack is empty*/
int isempty(){
    if(top == -1)
        return 1;
    else
        return 0;
}
/* check if the stack is full*/
int isfull(){
    if(top == MAXSIZE)
        return 1;
    else
        return 0;

}
/*function to return the topmost element in the stack*/
int pop(){
    int data;
    if(!isempty()){
        data = stack[top];
        top = top-1;
        return data;
    }
    else
    {
        printf("Could not insert data, stack is full.\n");
    }
}
int peek(){
    return stack[top];

}
int push(int data){
         if(!isfull()){
            top = top + 1;
            stack[top] = data;
         }
         else
         {
             printf("could not insert data, stack is full.\n");
         }
}
/* main function*/
int main()
{
    push(44);
    push(10);
    push(62);
    push(123);
    push(15);
    printf("Element at top of the stack : %d \n ",peek());
    printf("Elements:\n");

/*print stack data */
while(!isempty()){
    int data = pop();
    printf("%d \n",data);
}
printf("Stack full : %s \n",isfull()? "true": "false");
printf("Stack empty : %s \n",isempty? "true": "false");
return 0;


}
