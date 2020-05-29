#include<stdio.h>
#include<stdlib.h>
#define size  100
int queue[size];
int front=-1,rear=-1;
void enque();
void deque();
void display();
int isempty();
int isfull();
int main()
{int c;
 while(1)
 {
   printf("\nyour choices are\n1.isempty\n2.isfull\n3.enque\n4.deque\n5.display\n6.exit\nenter your choice\n");
   scanf("%d",&c);
   switch(c)
   {case 1:if(isempty())
       printf("queue is empty\n");
       else 
        printf("queue is not empty\n");break;
    case 2:
       if(isfull()) 
        printf("queue is full\n");
       else
        printf("queue is not full\n");break;
    case 3:
         if(isfull())
           printf("queue is full\n");
          else
           enque();break;
    case 4:
        if(isempty())
          printf("queue is empty\n");
        else
          deque();break;
    case 5:
        if(isempty())
          printf("queue is empty\n");
        else
          display();break;
    case 6:exit(1);break;
    default:printf("invalid option\n");
  }
 }
 printf("\n");
 return 0;
}
int isfull()
{
  if(rear==size-1)
     return 1;
  else
     return 0;
}
int isempty()
{
   if(front==-1||front>rear)
      return 1;
   else
      return 0;
}
void enque()
{
  int e;
  printf("enter the element\n");
  scanf("%d",&e);
  if(front==-1)
    front++;
  queue[++rear]=e;
}
void deque()
{
  int t;
  t=queue[front];
  printf("the element is\n%d",queue[front]);
  front++;
}
void display()
{
  int i;
   for(i=front;i<=rear;i++)
     printf("%d ",queue[i]);
}









