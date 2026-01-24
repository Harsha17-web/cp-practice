 #include <stdio.h>
 int main () {
  int d,m,y:
  scanf("%d %d %d",&d,&m,&y);
 
 if( m<1 || m>12) {
  printf("invalid year\n"0;
 return0;
}
 if( y < 1 ) {
 printf("invalid year");
 return 0;
}
 if( m== 1 || m == 3 || m == 5 || m == 7 || m ==8 || m == 10 || m ==12 ) {
  maxd = 31;
 }
 else if ( m== 4 || m== 6 || m== 9 || m == 11) {
 maxd = 30;
}
  else {
      
