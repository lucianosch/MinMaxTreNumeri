#include <stdio.h>

int main(void) {
  int a,b,c;
  int min,max;
  printf("Inserisci tre numeri interi: ");
  scanf("%d %d %d",&a, &b, &c);
  if ((a<b && a<c) || (a>b && a>c)){
    if (a<b){
      min = a;
      if (b<c){
        max =c;
      }else{
	      max = b;
      }
    }else {
      max=a;
    if (b<c){
      min = b;
    }else{
      min=c;
    }
  }
  }
  printf("min: %d, max: %d\n",min,max);
  return 0;
}
