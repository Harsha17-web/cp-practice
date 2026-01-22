#include <stdio.h>
 int main () {
 int n,abs;
 scanf("%d",&n);
 
 if(n<0) {
 abs = -n;
}
 else  {
 abs = n;
 printf("%d\n",abs);
}
 return 0;
}
