#include <stdio.h>

int main(){
  unsigned int num = 5562918573;
  char* pointer = &num;
  char* p = pointer;
  
  printf("unsigned int in hex is %x \n", num);
  printf("unsigned int in decimal is %u \n", num);
  printf("\n");

  /*
  for (int i = 0; i < sizeof(num); i++){
    printf("byte %d: %hhx\n", i, *p);
    p++;
  }
  */

  printf("PRINTING OUT EACH INDIVIDUAL BYTE\n------------------\n");
  p = pointer;
  int i;
  for (i = 0; i < sizeof(num); i++){
    printf("byte %d in hex: %hhx \n", i, *p);
    printf("byte %d in decimal: %hhu \n", i, *p);
    printf("\n");
    p++;
  }

  printf("INCREMENTING EACH INDIVIDUAL BYTE BY 1\n------------------\n");
  p = pointer;
  for (int i = 0; i < sizeof(num); i++){
    *p+= 1;
    printf("byte %d in hex: %hhx \n", i, *p);
    printf("byte %d in decimal: %hhu \n", i, *p);
    printf("\n");
    p++;
  }

  printf("INCREMENTING EACH INDIVIDUAL BYTE BY 16\n------------------\n");
  p = pointer;
  for (i = 0; i < sizeof(num); i++){
    *p+= 16;
    printf("byte %d in hex: %hhx \n", i, *p);
    printf("byte %d in decimal: %hhu \n", i, *p);
    printf("\n");
    p++;
  }
  return 0;

}
