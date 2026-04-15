#include <stdio.h>

int main(){
  FILE *pFile = fopen("C:\\Users\\Ashok\\Desktop\\output.txt", "w");
  char text[] = "Some-text "; 


  if (pFile == NULL) {
    printf("Error");
    return 1;
  } 
  fprintf(pFile, "%s", text);
  fclose(pFile);
  return 0;
}

