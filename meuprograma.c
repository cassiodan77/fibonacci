#include <stdio.h>
#include <stdlib.h>

int fib (int n) {
if (n<=2)
 return 1;
else
 return fib(n-2) + fib(n-1);
}
void main(){
 int n;

 for(n = 1; n <= 20; n++){
 printf("%d", fib(n));
}
 printf("\n");
}
