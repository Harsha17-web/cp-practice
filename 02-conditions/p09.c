#include <stdio.h>
 int main () {
 int a,b,c;
 scanf("%d %d %d", &a, &b ,&c);
 int D = b * b - 4*a*c;
 if(D > 0) {
 printf(" two real  roots");
}
 else if( D == 0) {
 printf(" one real and two equal roots");
}
 else {
 printf(" two complex roots");
}
 return 0;
}
