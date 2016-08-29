#include <stdio.h>

int digit (int );
int palidrome (int );
int dignum (int ,int );

void main (void){
  int i,j,times;
  int ans = 0;
  
  for (i=999; i>900; i--)
    for (j=999; j>900; j--)
      if (palindrome(i * j) == 1 && (i * j)> ans) ans = i * j;
  
  printf("ans = %d\n",ans);
}

int digit (int x){
  int digit = 0;
  while(x != 0){
    x /= 10;
    digit++;
  }
  return digit;
}

int palindrome (int x){
  int dig = digit(x);
  int n;

  for (n=1; n<dig; n++)if (dignum(x,n) != dignum(x,dig-n+1)) return 0;
  return 1;
}

int dignum (int x, int n){
  int i;
  for (i=1; i<n; i++) x /= 10;
  return (x%10);
}
