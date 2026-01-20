#include <stdio.h>
 int main () {
  float p,r,t,si;
  printf("enter p,r,t: ");
 scanf("%f %f %f",&p,&r,&t);
  si =(p*r*t)/100.0f;
 printf("simple intrest = %.2f\n", si);
 return 0;
}
