#include <stdio.h>
 int main() {
 float c,f;
 printf("enter temparature in celsius: ");
 scanf("%f",&c);
  f = ( c * 9.0 /5.0 ) + 32.0;
 printf("temperature in farenheit = %.2f\n",f);
 return 0;
}
