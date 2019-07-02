//RESPOTA: 8 e 4
// teste de mesa 2
#include <stdio.h>
int y=6;
void func(int *pri, int seg);
int main(){
  int x, y;
  x = 3;
  y = 4;
  func(&x,y);
  printf("x = %d, y = %d", x, y);
  return 0;
}

void func(int *pri, int seg){
 *pri = seg;
 seg = *pri + seg;
 *pri = y + 2;
}
