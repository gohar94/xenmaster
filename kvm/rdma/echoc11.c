#include <stdio.h>
#include <stdlib.h>
int main() {
FILE *fp;
char* str = "string";
int x = 10;

fp=fopen("/home/xenmaster/Desktop/test.txt", "a");
if(fp == NULL)
    exit(-1);
fprintf(fp, "This is a string which is written to a file\n");
fprintf(fp, "The string has %d words and keyword %s\n", x, str);
fclose(fp);
return 0;
}
