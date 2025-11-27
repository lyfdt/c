#include <stdio.h>
#include<string.h>
int main() {
    char a[1000000];
    scanf("%s", a);
   int len=strlen(a);
    for (int i = 0; i <len; i++) {
        if (a[i] == '5') {
            a[i] = '*';
        }
         printf("%c",a[i]);
    }
    return 0;
}