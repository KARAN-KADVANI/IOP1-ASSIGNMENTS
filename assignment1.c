// PROGRAM TO CALCULATE SIMPLE INTEREST

#include <stdio.h>

int main()

{

  int P, R, T, SI; // P=principal,R=rate,T=time,SI=simple interest

  printf("enter value of P,R,T");

  scanf("%d%d%d", &P, &R, &T);

  SI = (P * R * T) / 100;

  printf("value of simple interest is %d", SI);

  return 0;
}
