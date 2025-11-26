#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
int main() {
    char  b[100];
    int c=0;
    scanf("%s\n",b);
    for(int i=0;i<strlen(b);i++)
    {
    c+=b[i]-'0';
    }
    printf("%d",c);
    return 0;
}