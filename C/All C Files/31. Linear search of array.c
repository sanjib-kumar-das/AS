#include <stdio.h>
 
long lin(long [], long, long);
 
int main()
{
   long arr[100], search, c, n, pos;
 
   printf("Input number of elements in array\n");
   scanf("%ld", &n);
 
   printf("Input %d numbers\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%ld", &arr[c]);
 
   printf("Input number to search\n");
   scanf("%ld",&search);
 
   pos = lin(arr, n, search);
 
   if (pos == -1)
      printf("%d is not present in array.\n", search);
   else
      printf("%d is present at location %d.\n", search, pos+1);
 
   return 0;
} 
 
long lin(long a[], long n, long find) {
   long c;
 
   for (c = 0 ;c < n ; c++ ) {
      if (a[c] == find)
         return c;
   }
 
   return -1;
}

