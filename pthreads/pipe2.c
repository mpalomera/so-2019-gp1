#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int num = 0;
  fprintf(stderr, "imprimendo los pares \n");

  while(1){
    scanf("%d\n",&num);//noten que leo de stdout
    if(num == -1){
      break;
    }
    if(num % 2 == 0){
      fprintf(stderr,"%d\n",num);
    }
  }
  fprintf(stderr, "completado\n");
}
