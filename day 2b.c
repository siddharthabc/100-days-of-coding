#include <stdio.h>

int main()
{
int radius, area, circumference;

printf("Enter radius: ");
scanf("%d", &radius);

area = (314 * radius * radius) / 100;
circumference = (2 * 314 * radius) / 100;

printf("Area of circle = %d\n", area);
printf("Circuference of circle = %d\n", circumference);

return 0;
}