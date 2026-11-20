#include <stdio.h>
#define PI 3.14159

int main() {
// printf("          *\n");
// printf("         *\n");
// printf("        *\n");
// printf("       *\n");
// printf("      *\n");
// printf("*    *\n");
// printf(" *  *\n");
// printf("  * \n");

float radius;
printf("Enter the radius of the sphere: ");
scanf("%f", &radius);
float volume;

volume = (4.0 / 3.0) * PI * radius * radius * radius;

printf("Volume: %.2f cubic meters\n", volume);

// int age, height, weight;
// float pay, tax, netpay;
// printf("%d,%d,%d\n", age, height, weight);
// printf("%f,%f,%f\n", pay, tax, netpay);

// float pay;
// printf("enter a dollar amount: ");
// scanf("%f", &pay);
// printf("with tax added: %.2f\n", pay * 1.05);
int i, j;
float x, y;

i = 10;
j = 20;
x = 43.2892;
y = 5527.0;
printf("i = %d, j = %d\n", i, j);
printf("x = %f, y = %f\n", x, y);
return 0;

}