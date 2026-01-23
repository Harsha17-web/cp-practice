#include <stdio.h>
 int main () {
  float S,inc;
  scanf("%f",&S);
  
  if( S <= 10000) {
    inc = S * 0.10;
  }
 else {
   inc = S * 0.20;
} 
  printf("increment = %.2f\n",inc);
  printf("new salary = %.2f\n",S + inc);
 return 0;
}
