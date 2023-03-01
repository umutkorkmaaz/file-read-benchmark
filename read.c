#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define BUFFER_SIZE 1024

int main() {
    clock_t start_time = clock();
    FILE *fp;
    char buffer[BUFFER_SIZE];

    fp = fopen("lists.csv", "r");
    if (fp == NULL) {
        printf("Dosya acilamadi!\n");
        return 1;
    }

    while (fgets(buffer, BUFFER_SIZE, fp) != NULL) {
        if (strstr(buffer, "123.194.235.37") != NULL) {
            break;
        }
    }

    fclose(fp);
    clock_t end_time = clock();
    double elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC * 1000;
    printf("[C] File check finished in %lf ms\n", elapsed_time);

    return 0;
}

