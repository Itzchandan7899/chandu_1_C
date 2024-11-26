#include <stdio.h>
int main() {
  float principle, rate, time, si;
  printf("enter principle,rate,time,and time:");
  scan f("%f%f%f",&principle,&rate,&time);
  interest=(principal*rate*time)/100;
  printf("simple interest=%f\n",interest);
  return 0;
}
