#include <stdio.h>
int main() {
    int a,b,c;
      printf("Enter Number A: ");
      scanf("%d",&a);
      printf("Enter Number B: ");
      scanf("%d",&b);

    c = a; // c has value of a
    a = b; // now a is empty so a has value of b
    b = c; // c hold a soo put in b

    printf("a = %d, b = %d\n", a, b);
    return 0;
}
