#include <stdio.h>

#define NUM 600851475143

void main (void){
  int i,j;
  int ans = 1;
  int num = sqrt(NUM);
  int sieve[num+1];

  printf("%d\n",num);

  for (i=2; i<num; i++) sieve[i]=1;
  for (i=2; i<num; i++){
    ans = i;
    for(j=2; i*j<num; j++) sieve[i*j]=0;
  }
  printf("%d\n", ans);
  
  /*
  for(i=1;i<=num;i++){
    if(num%i == 0) ans = i;
    printf("%d %d %d\n", i, num%i, ans);
    }*/

  //  printf("%d", ans);
}
