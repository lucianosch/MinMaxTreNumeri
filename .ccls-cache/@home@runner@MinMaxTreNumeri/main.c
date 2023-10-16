#include <stdio.h>

int main(void) {
  int a,b,c;
  int min,max;
  printf("Inserisci tre numeri interi: ");
  scanf("%d %d %d",&a, &b, &c);
  if ((a<b && a<c) || (a>b && a>c)){
    if (a<b && b>c){
      min = a;
      max = b;
    } else {
      min = a;
    }
  }
  printf("min: %d\n",min);
  return 0;
}