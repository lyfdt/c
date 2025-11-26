#include <stdio.h>

int main() {
    int a;
    long long b;
    float c;
    char d;
    char e[10000];
    scanf("%d\n",&a);
    scanf("%lld\n",&b);
    scanf("%f\n",&c);
    scanf("%c\n",&d);
    scanf("%s\n",e);
    printf("%d\n",a);
    printf("%lld\n",b);
    printf("%0.1f\n",c);
    printf("%c\n",d);
    printf("%s\n",e);
 return 0;
}