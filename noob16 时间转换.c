#include <stdio.h>

int main() {
    int a,hour,min,s;
    scanf("%d",&a);
    hour=a/3600;
    min=(a%3600)/60;
    s=(a%3600)%60;
    printf("%d %d %d",hour,min,s);
       return 0;
}