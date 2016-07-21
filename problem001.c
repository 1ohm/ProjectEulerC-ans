#include <stdio.h>

#define NUM 1000

int Sum_Multiple (int );

void main (void){
  int sum = Sum_Multiple(3) + Sum_Multiple(5) - Sum_Multiple(15);
  printf("%d\n", sum);

}

int Sum_Multiple (int num){
  int i;
  int sum=0;
  
  for (i=1;i*num<NUM;i++) sum += (num*i);
  return sum;
}
