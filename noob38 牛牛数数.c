#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    int a;
    scanf("%d",&a);
    for(int i=0;i<=a;i++)
    {
char buf[100];
sprintf(buf, "%d", i);
if(i%4!=0 && strchr(buf,'4')==NULL)
{
    printf("%d\n",i);
}
    }
    return 0;
} 
/*
运用了两个特殊的库函数
sprintf（）可用于类型转换
strchr（）用于在数组中查找特定字符
包含了两个常用的头文件
*/