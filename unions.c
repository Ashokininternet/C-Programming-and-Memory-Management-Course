#include <stdio.h>
#include <string.h>
typedef union{
  int x;
  char y[45];
} theunio ;


int main(int argc, char **argv){
  theunio s;
  s.x = 8;
  strcpy(s.y, "hello");
  printf("%d, %s\n", s.x, s.y);
}
