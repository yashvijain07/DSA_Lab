#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node*next;
};
typedef struct node queue;
queue *f=NULL;
queue *r=NULL;

void insqueue(int);
int delqueue();
void display();
void main()
{
  int ch, item;
  clrscr();
  while(1)
  {
    printf("\n 1.Insert Queue 2.Delqueue 3.Display 4.Exit\n");
    scanf("%d", &ch);
    switch(ch)
    {
      case1: printf("Enter the item: ");
             scanf("%d", &item); 
             insqueue(item);
             break;
      case2: printf("Deleted item is %d", delqueue());
             break;
      case3: printf("\nElements are:\n");
             display();
             break;
      case4: exit(0);
    }
  }
  getch();
}
int delqueue()
{
  int x;
  queue *n;
  if(f==NULL)
  {
    printf("Queue Underflow\n");
    return 0;
  }
  else
  {
    n=f;
    x=n->info;
    f=n->next;
    free(n);
  }
  return x;
}
void insqueue(int item)
{
  queue *n;
  n=(queue*)malloc(sizeof(queue));
  n->info=item;
  n->next=NULL;
  if(f=NULL)
  {
    f=n;
    r=n;
  }
  else
  {
    r->next=n;
    r=n;
  }
}
void display()
{
  struct node *i;
  printf("Elements of queue are: \n");
  for(i=f; i!=NULL; i=i->Next)
  {
    printf("%d\n", i->info);
  }
}