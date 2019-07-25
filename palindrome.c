#include<stdio.h>
 
int main() {
   int n, rem, rev = 0,num;
 
   printf("\nEnter any no to be reversed : ");
   scanf("%d", &n);
   num=n;
   while (n >= 1) {
      rem = n % 10;
      rev = rev * 10 + rem;
      n= n / 10;
}
      if(rev==num)
      printf("the given no is palindrome");
      else
      printf("the given no is not a palindrome");
 
   printf("\nReversed Number : %d", rev);
   return (0);
}
