#include <stdio.h>
#include <stdlib.h>

int main() {
  fprintf(stderr, "pipe 1 sending numbers to pipe 2\n");
  for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
  }
  fprintf(stderr, "sending end\n");
  printf("%d\n",-1);
}
