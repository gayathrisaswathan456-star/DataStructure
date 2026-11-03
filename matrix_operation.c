#include <stdio.h>
int main()
{ 
  int a[10][10], b[10][10], result[10][10];
  int r1, c1, r2, c2;
  int i, j, k, ch;
  
  printf("Enter the row and column of matrix A:\n");
  scanf("%d%d", &r1,& c1);
  print("enter the elements of matrix A:\n");
  {
  for(i=0; i<2; i++)
  
  for(c=0; c<2; c++)
  printf("Enter the matrix B:\n");
  for(r=0; r<2; r++)
  for(c=0; c<2; c++)
  scanf("%d", &b[r][c]);
  
  printf("1.Addition");
  printf("2.Subtraction");
  printf("3.Multiplication");
  printf("Enter your choice:");
  scanf("%d", &ch);
  
  switch(ch)
  {
     case1:
           printf("Addition:\n");
           for(r=0; r<2; r++)
           {
             for(c=0; c<2; c++)
             printf("%d", a[r][c]+b[r][c]);
             printf("\n");
           }
           break;
     case2:
           printf("Subtraction:\n");
           for(r=0; r<2; r++)
           {
             for(c=0; c<2; c++)
             printf("%d", a[r][c]-b[r][c]);
             printf("\n");
           }
            break;
     default:
     printf("Invalid choice");
   }
     return 0;
}
