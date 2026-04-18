#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 0;
    printf("Enter the number of players: ");
    scanf("%d",& num);
    int *score = calloc(num, sizeof(int));

    if(score == NULL){
      printf("Memmory not found \n");
      return 1; 
    }

   for(int i = 0;i < num; i++){
    printf("Enter score for %d: ", i + 1);
    scanf("%d", &score[i]);
   }


    for (int i = 0;i < num; i++) {
      printf("Player %d has score: %d \n ",i + 1, score[i]);
    }

    
    free(score);
    score = NULL;

    return 0;
}
