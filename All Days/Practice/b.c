#include <stdio.h>
// int main() {
// printf ("%s", 5 + "Facsimile") ;
// }
extern void print (int *ia, int sz) ; void print(int *ia, int sz);


int main( ) {
// int i=5;
// i=i++ + ++i;
// printf("%d", i) ;
int *x, *y;
// x = & (y ) ; y = & (x) ;
print(&x,5);
return 0;
}
