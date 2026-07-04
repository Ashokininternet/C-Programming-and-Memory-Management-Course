#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv) {
  void *Break = sbrk(0);
  printf("%p\n", Break);
  return 0;
}
