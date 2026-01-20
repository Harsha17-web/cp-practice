#include <stdio.h>
 int main () {
 float r;
 const float pi = 3.14f;
 printf("enter radius: ");
 scanf("%f",&r);
 float area  = pi * r * r;
 printf("area = %.2f\n", area);
 return 0;
}
