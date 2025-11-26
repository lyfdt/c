#include <stdio.h>
int main() {
    int a,b;
    b=0;
    scanf("%d\n",&a);
    for(int i=0;i<=a;i++)
    {
        for(int z=0;z<=i;z++)
        {
            b+=z;
        }
    }
    printf("%d\n",b);
    return 0;
}