#include <stdio.h>
#include <stdlib.h>

int main() {

    char lang[15];
    char ing[20];
    char lang2F[15];
    char lang2E[15];

    printf("enter a language:");
    scanf("%s", lang);
    printf("enter a present participle:");
    scanf("%s", ing);
    printf("enter a language:");
    scanf("%s%s", lang2F, lang2E);

    printf("Any thing that can be written in %s,", lang);
    printf(" will eventually be %s ", ing);
    printf("in %s %s.\n", lang2F, lang2E);


    return 0;
}