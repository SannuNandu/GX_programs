#include <stdio.h>
int main() {
FILE *fp;
char *sub[] = {"C Programming Tutorial\n", "C++ Tutorial\n", "Python Tutorial\n", "Java Tutorial\n"};
fp = fopen("file2.txt", "w");
for (int i = 0; i < 4; i++) {

fputs(sub[i], fp);
}
fclose(fp);
return 0;
}
