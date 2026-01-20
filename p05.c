#include <stdio.h>
  int main() {
  int l,b;
  printf("enter l and  b: ");
  scanf("%d %d",&l, &b);
  
  int area = l * b;
  int perimeter = 2 * ( l + b );
  
  printf("area = %d\n",area);
  printf("perimeter = %d\n",perimeter);
 return 0;
}  
