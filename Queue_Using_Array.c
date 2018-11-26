#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int queue[10];
int front=-1;
int rear=-1;
void insert(int);
int destroy();
void display();
void main()
{
  int ch, i, item;
  clrscr();
  while(1)
  {
    printf("\n 1.Push 2.Pop 3.Display 4.Exit\n");
    scanf("%d", &ch);
    switch(ch)
    {
      case1: printf("Enter item to be inserted in queue: ");
             scanf("%d", &item); 
             insert(item);
             break;
      case2: printf("Deleted item is %d", destroy());
             break;
      case3: printf("\nElements are:\n");
             display();
             break;
      case4: exit(0);
    }
  }
  getch();
}
void insert(int item)
{
  if(rear==9)
  {
    printf("Queue Overflow\n");
  }
  else if(front<0)
  {
    front++;
    rear++;
    queue[rear]=item;
  }
  else
  {
    rear++;
    queue[rear]=item;
  }
}
int destroy()
{
  int x;
  if(front<0)
  {
    printf("\nUnderflow\n");
    return 0;
  }
  else if(front==rear)
  {
    x=queue[front];
    front=-1;
    rear=-1;
    return x;
  }
  else
  {
    x=queue[front];
    front++;
    return x;
  }
}
void display()
{
  int i;
  for(i=front, i<=rear; i++)
  {
    printf("%d", queue[i]);
  }
}