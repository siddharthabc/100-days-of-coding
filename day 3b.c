#include <stdio.h>

int main()
{
int a, b, x;

printf("Enter two numbers: ");
scanf("%d %d", &a, &b);

x = a;
a = b;
b = x;

printf("After swapping:\n");
printf("First number = %d\n", a);
printf("Second number = %d\n", b);

return 0;
}