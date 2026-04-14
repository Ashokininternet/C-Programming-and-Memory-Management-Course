#include <stdio.h>
#include <stdlib.h>

int main(){

 typedef struct {
    char model[25];
    int year;
    int price;
  }Car;

 Car car[] = {{"Nissan EGOIST", 2025, 800000 }, {"Nissan R34 Skyline GTR", 2010, 150000 }, {"Nissan R35 GTR", 2025, 30000 }, {"Nissan R34 GTR", 2015, 530000 }}; 

 int num = sizeof(car) / sizeof(car[0]);

 for(int i = 0; i < num; i++){
 printf("%s %d %d$ \n", car[i].model, car[i].year, car[i].price);
 }

}
