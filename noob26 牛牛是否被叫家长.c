#include <stdio.h>

int main() {
    int a, b,c;
    scanf("%d%d%d",&a,&b,&c);
    float Avg;
    Avg=(a+b+c)/3;
    if(Avg>=60)
    {
        printf("NO");
    }
    else
     {
    printf("YES");
    }
        return 0;
}