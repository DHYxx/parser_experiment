#include "parser.h"
#include <stdlib.h>
#include <stdio.h>

int parse_to_int(const char *str) {
    return atoi(str);
}

int count_lines(const char *file_path) {
    FILE *fp = fopen(file_path, "r");
    if (!fp) return -1;
    int count = 0;
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') count++;
    }
    fclose(fp);
    return count;
}
