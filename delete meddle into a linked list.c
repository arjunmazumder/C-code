#include<stdio.h>
#include<stdlib.h>
struct node{
       int value;
       struct node *next;
};
void print(struct node*p)
{
     while(p!=NULL)
     {
       printf("%d ", p->value);
       p=p->next;
      }
}
int main(){
     struct node *head;
     struct node *one=NULL;
     struct node *three=NULL;

     one=malloc(sizeof(struct node));
     three=malloc(sizeof(struct node));

     head=one;

     one->value=10;
     one->next=three;

     three->value=30;
     three->next=NULL;


     print(head);
    }
