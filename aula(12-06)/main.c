#include<stdio.h>
#include "prog2Utils.h"


int main(){
  int a,b,c;
  getToday(&a,&b,&c);
  printf("A data atual �: %d/%d/%d",a,b,c);
  printf("\n");
  editFile(":file.txt", ",",01, 1, "Nesquik � horr�vel");

}
