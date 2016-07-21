#include <stdio.h>

#define NUM 10001
#define Boolean int

Boolean Prime(int);

void main (void){
  int num=0;
  int i=0;
  while (1){
    if(Prime(num) == 1) i++;
    printf("%d %d\n", num, i);
    if(i==NUM) break;
    num++;
  }
  printf("\n%d\n",num);
}

Boolean Prime (int num){
  int i;
  if(num < 2) return 0;
  if(num == 2) return 1;
  if(num % 2 == 0) return 0;
  for (i=3; i<=num/i; i+=2) if(num % i == 0) return 0;
  return 1;
}
