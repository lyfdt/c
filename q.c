#include <stdio.h>
#include<string.h>
void animal(char a[20], char b[20]) {
    if ((strcmp(a, "elephant") == 0 && strcmp(b, "tiger") == 0) ||
            (strcmp(a, "tiger") == 0 && strcmp(b, "cat") == 0) ||
            (strcmp(a, "cat") == 0 && strcmp(b, "mouse") == 0) ||
            (strcmp(a, "mouse") == 0 && strcmp(b, "elephant") == 0)) {
        printf("win\n");
    } else if ((strcmp(b, "elephant") == 0 && strcmp(a, "tiger") == 0) ||
               (strcmp(b, "tiger") == 0 && strcmp(a, "cat") == 0) ||
               (strcmp(b, "cat") == 0 && strcmp(a, "mouse") == 0) ||
               (strcmp(b, "mouse") == 0 && strcmp(a, "elephant") == 0)) {
        printf("lose\n");
    } else {
        printf("tie\n");
    }
}
int main() {
    char a[20], b[20];
    scanf("%s%s", a, b);
animal(a, b);
    return 0;
}
/*
这里用了strcmp函数来比较字符串是否相等。
如果相等则返回0，否则返回非0值。
因此在判断时要用==0来判断字符串是否相等。   
用到了string.h头文件来使用strcmp函数。
*/