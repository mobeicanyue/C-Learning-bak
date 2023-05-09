#include <stdio.h>
#include <stdlib.h>
#define fontname "HZK16s2"
#define bitmapSize 16
unsigned char KEYS[8] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01};
char** strToFonts(char* str, int len) {
FILE *fp =fopen(fontname, "rb");
char** fonts = (char **) malloc(len * sizeof(char*));
for (int i = 0; i < len; i++) fonts[i] = (char*)malloc(bitmapSize * 2 * sizeof(char)
for (int i = 0; i < len; i++) {
fseek(fp, (94 * ((unsigned char)str[2 * i] - 0xa0 - 1) + ((unsigned char)str[2 *
fread(fonts[i], bitmapSize * 2, 1, fp);
}
fclose(fp);
return fonts;
}
void printChinese(char** fonts, int len) {
for (int line = 0; line < bitmapSize; line++) {
for (int chr = 0; chr < len; chr++) {
for(int i = 0; i < bitmapSize / 8; i++) {
char asc = fonts[chr][2 * line + i];
for (int j = 0; j < 8; j++) asc & KEYS[j] ? printf("* ") : printf(" ");
}
}
printf("\n");
}
free(fonts);
}
int main() {
char *a ="ÄãºÃÄãºÃ";
int len = strlen(a) / 2;
printChinese(strToFonts(a, len), len);
return 0;
}