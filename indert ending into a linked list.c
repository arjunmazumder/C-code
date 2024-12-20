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
     struct node *two=NULL;
     struct node *three=NULL;
     struct node *four=NULL;

     one=malloc(sizeof(struct node));
     two=malloc(sizeof(struct node));
     three=malloc(sizeof(struct node));
     four=malloc(sizeof(struct node));

     head=one;

     one->value=10;
     one->next=two;

     two->value=15;
     two->next=three;

     three->value=30;
     three->next=four;

     four->value=40;
     four->next=NULL;

     print(head);
    }
