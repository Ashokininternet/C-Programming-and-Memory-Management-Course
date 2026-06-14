#include <stdio.h>
#include <stdlib.h>

int main(){
  int num = 0;
  printf("Enter the value :");
  scanf("%d", &num);
  char *array = malloc(num * sizeof(char));

  if(array == NULL){
    printf("Memmory not found");
    return 1;
  }
  
  for (int i = 0; i < num; i++) {
    printf("Enter value NO: %d: ", i + 1);
    scanf(" %c", &array[i]);
  }

  for(int i = 0; i < num; i++){
   printf("%c = %p \n", array[i], (void *)&array[i]);
  }

  free(array);
  array = NULL;
  return 0;
}
