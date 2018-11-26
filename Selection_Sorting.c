#include<stdio.h>
#include<conio.h>
void sort( int[], int);
void main()
{
  int i, size, a[10];
  clrscr();
  printf("Enter the size of the array: ");
  scanf("%d", &size);
  printf("Enter the elements of the array: ");
  for(i=0; i<size; i++)
  {
     scanf("%d", &a[i]);
  }
  sort(a, size);
  printf("Sorted array is: ");
  for(i=0; i<size; i++)
  {
     printf("%d", a[i]);
  }
  getch();
}
void sort(int a[], int size)
{
  int i, j, min, index;
  for(i=0; i<size; i++)
  {
    min=a[i];
    index=i;
    for(j=i+1; j<size; j++)
    {
      if(min>a[j])
      {
         min=a[j];
         index=j;
      }
    }
    a[index]=a[i];
    a[i]=min;
  }
}
  