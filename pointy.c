#include <stdio.h>

int main(){
  unsigned int num = 5562918573;
  char* pointer = &num;
  
  printf("unsigned int %d in hex is %x\n", num, num);

  for (int i = 0; i < sizeof(num); i++){
    pointer++;
    printf("byte %d: %hhx\n", i, *pointer);
  }

  return 0;

}
