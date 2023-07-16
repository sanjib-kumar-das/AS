#include <stdio.h>
 
int main()
{
  int  first, last,  n, search , middle,arr[100],c;
   printf("Input total number of elements present in the array: ");
   scanf("%d",&n);
 
   printf("Input %d numbers\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d",&arr[c]);
 
   printf("Input the number you want to search: ");
   scanf("%d", &search);
 
   first = 0;
   last = n - 1;
   middle = (first+last)/2;
 
   while (first <= last) {
      if (arr[middle] < search)
         first = middle + 1;    
      else if (arr[middle] == search) {
         printf("%d is present at location %d.\n", search, middle+1);
         break;
      }
      else
         last = middle - 1;
 
      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! %d is not present in the list.\n", search);
 
   return 0;   
      }

