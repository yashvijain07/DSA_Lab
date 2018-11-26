#include<stdio.h>
#include<conio.h>
void push(int);
int pop();
void display();
struct node
{
  int info;
  struct node*next;
}*top=NULL;
void push(int item)
{
  struct node*newnode;
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->info=item;
  newnode->next=top;
  top=newnode;
}
int pop()
{
  int x;
  struct node*p;
  if(top==NULL)
  {
    printf("Stack Underflow\n");
    return 0;
  }
  else
  {
    p=top;
    x=p->info;
    top=p->next;
    free(p);
    return x;
  }
}
void display()
{
  struct node*i;
  printf("Elements of stack are:\n");
  for(i=top, i!=NULL; i=i->Next)
  {
    printf("\n%d", i->info);
  }
}
void main()
{
  int ch, item;
  clrscr();
  while(1)
  {
    printf("\n 1.Push 2.Pop 3.Display 4.Exit\n");
    scanf("%d", &ch);
    switch(ch)
    {
      case1: printf("Enter the item: ");
             scanf("%d", &item); 
             push(item);
             break;
      case2: printf("Deleted item is %d", pop());
             break;
      case3: printf("\nElements are:\n");
             display();
             break;
      case4: exit(0);
    }
  }
  getch();
}