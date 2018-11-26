#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int stack[10];
int top=-1;
void push(int item);
int pop();
void display();
void main()
{
  int ch, i, item, n;
  clrscr();
  while(1)
  {
    printf("\n 1.Push 2.Pop 3.Display 4.Exit\n");
    scanf("%d", &ch);
    switch(ch)
    {
      case1: printf("Enter item: ");
             scanf("%d", &item);
             printf("Entered item is %d", push(item));
             break;
      case2: printf("Deleted item is %d", pop());
             break;
      case3: display();
             break;
      case4: exit(0);
    }
  }
  getch();
}
int push(int item)
{
  if(top==9)
  {
    printf("Stack Overflow\n");
  }
  else
  {
    int y;
    top=top+1;
    stack[top]=item;
    y=stack[top];
    return y;
  }
}
int pop()
{
  int x;
  if(top<0)
  {
    printf("Stack Underflow");
    return 0;
  }
  else
  {
    x=stack[top];
    top=top--;
    return x;
  }
}
void display()
{
  int i;
  printf("Elements of stack are:\n");
  for(i=top, i>=0; i--)
  {
    printf("%d\t", stack[i]);
  }
}