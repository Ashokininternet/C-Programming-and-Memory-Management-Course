#include <stdio.h>

int main(){
  FILE *pFile = fopen("output.txt", "r");
  char buffer[1500] = {0};
  if(pFile == NULL){
    printf("Error \n");
    return 1;
  }
    while (fgets(buffer, sizeof(buffer), pFile)) {
      printf("%s \n", buffer);
    }
    fclose(pFile);
  return 0;
  }
