#include <stdio.h>
#include <math.h>

#define NUM 600851475143

void main (void){
  int i;
  unsigned long long ans = NUM;

  for(i=2; i<=sqrt(NUM); i++){
    while (ans%i == 0 && ans/i != 1) ans /= i;
  }
  printf("%lld\n",ans);
}
