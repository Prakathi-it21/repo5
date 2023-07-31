#include <stdio.h>
int main()    {
   int i,j,n;
   printf("Enter the number of rows:");
   scanf("%d",&n);
    for (i=1;i<=n;i=i+1)  {
      for(j=1;j<=n-i;j=j+1)  {
      printf("X\t");
      }
    printf("\n");
   }
  return 0;
}
