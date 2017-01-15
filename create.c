#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fp;

    for (int i = 1; i <= argc; i++) {
        fp = fopen(argv[i], "w");

        if (fp == NULL)
            exit(1);
        else
            fclose(fp);
    }

    return EXIT_SUCCESS;
}

