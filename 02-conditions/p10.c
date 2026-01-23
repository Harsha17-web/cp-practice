#include <stdio.h>
 int main () {
 int cp,sp;
  scanf("%d %d",&cp,&sp);
 
 if(sp > cp ) {
 printf("profit = %d\n",sp - cp);
 }
else if( sp < cp ){
 printf("loss = %d\n",cp - sp);
}
 else {
 printf("neither loss nor gain");
}
return 0;
}
