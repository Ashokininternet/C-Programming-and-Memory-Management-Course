#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main() {
  time_t rawtime = 0;
  struct tm *pTime = NULL;
  bool isRunning = true;

  while (isRunning) {
    time(&rawtime);
    pTime = localtime(&rawtime);

    system("clear");

    printf("Clock \n");
    printf("Date:%02d:%02d:%02d\n", pTime->tm_mday, pTime->tm_mon + 1,
           pTime->tm_year + 1900);
    printf("Time:%02d:%02d:%02d\n", pTime->tm_hour, pTime->tm_min,
           pTime->tm_sec);
    fflush(stdout);
    sleep(1);
  }
  return 0;
}
