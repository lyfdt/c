#include <stdio.h>
#include<stdlib.h>
int main() {
    int a,c;
    scanf("%d\n",&a);
    a=abs(a);
    c=a%10;
    printf("%d",c);
    return 0;
}
//在c语言中要用abs函数要加入stdlib的头文件