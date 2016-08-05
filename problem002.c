#include <stdio.h>

#define STOP 4000000

int even (int );

void main (void){
  int fivo[2] = {1, 1};
  int ans = 0;
  int sum = 0;
  int tmp;

  while(fivo[1] <= STOP){
    if (even(fivo[1]) == 1) ans += fivo[1];
    tmp = fivo[1];
    fivo[1] = fivo[0] + fivo[1];
    fivo[0] = tmp;
    printf("%d %d\n", fivo[0], fivo[1]);
  }
  printf("%d\n", ans);
}

int even (int x){
  if(x%2 == 0) return 1;
  return 0;
}



