#include <stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    float c;
    c=(float)b/a*100;//c语言的转化格式和python不一样
    printf("%.3f%%\n",c);
    return 0;
}