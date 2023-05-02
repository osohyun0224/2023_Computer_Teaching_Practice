#include <stdio.h>
int main(){
  printf("%d %d %d %d\n",sizeof(char),sizeof(short),sizeof(int),sizeof(long));
  printf("%d %d",sizeof(float), sizeof(double));
  return 0;
}