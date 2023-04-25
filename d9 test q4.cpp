#include <stdio.h>
int main() {
   int arr[50], n, search, i;
   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);
   printf("Enter %d integers:\n", n);
   for (i = 0; i < n; i++)
      scanf("%d", &arr[i]);
   printf("Enter the element to search: ");
   scanf("%d", &search);
   for (i = 0; i < n; i++) {
      if (arr[i] == search) {
         printf("%d is present at position %d.\n", search, i + 1);
         break;
      }
   }
   if (i == n)
      printf("%d is not present in the array.\n", search);
   return 0;
}
