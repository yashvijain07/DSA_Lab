#include<stdio.h>
#include<conio.h>
void main()
{
  int temp, a[20], n, i, j;
  clrscr();
  printf("Enter the size of the array: ");
  scanf("%d",&n);
  printf("Enter the array elements: ");
  for(i=0, i<n; i++)
  {
    scanf("\n%d", &a[i]);
  }
  for(i=0; i<n; i++)
  {
    for(j=0; j<n-1; j++)
    {
      if(a[j]>a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
  printf("Sorted array is: \n")
  for(i=0; i<n; i++)
  {
    printf("\n%d", [i]);
  }
  getch();
}