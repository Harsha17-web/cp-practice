#include <stdio.h>
  int main () {
  float I, tax;
  scanf("%f", &I);
  
 if( I < 250000 ) {
 tax = 0;
 }
 else if( I  <= 500000) {
  tax = ( I - 250000 ) * 0.05;
 }
 else if( I <=1000000) {
  tax = 250000 * 0.05 + ( I - 500000) * 0.2;
}
 else {
  tax = 250000 * 0.05 + 500000 * 0.2 + (I - 1000000) * 0.3;
 }
  printf("tax = %.2f\n",tax);
 return 0;
}
  
