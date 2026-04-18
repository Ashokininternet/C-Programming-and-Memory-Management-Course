#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num = 0;
  printf("Enter the num of prices: ");
  scanf("%d", &num);
  float *prices = calloc(num, sizeof(float));
  
  if(prices == NULL)
  {
    printf("Memmory error");
    return 1;
  }

  for(int i = 0; i < num; i++)
  {
    printf("Enter the %d price: ", i+ 1);
    scanf("%f", &prices[i]);
  }

  int NewNum = 0;
  printf("Enter new number of prices: ");
  scanf("%d", &NewNum);

  float *temp = realloc(prices,NewNum * sizeof(float)); 

  if(temp == NULL)
  {
    printf("Memmory error \n");
  }else 
  {
    prices = temp;
    temp = NULL;
    for(int i = num; i < NewNum; i++)
    {
      printf("Enter the %d price: ", i + 1);
      scanf("%f", &prices[i]);
    }
    for(int i = 0; i < NewNum; i++)
    {
      printf("The %d price is %.3f \n", i +1, prices[i]);
    }
  } 

  
  free(prices);
  prices = NULL;

  return 0;
}

