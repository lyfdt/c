#include<stdio.h>
#include<string.h>
int main()
{
char a[5];//默认需要一个结束符/0，占一个字节的空间大小，不然会报错，栈错误
scanf("%s",a);
for(int i=4;i>0;i--)
{
    printf("%c",a[i-1]);
}
    return 0;
}
/*法2：
#include<stdio.h>
int main()
{
    char a[5];
    
    // 安全的输入方式
    if(scanf("%4s", a) == 1) {
        printf("%c%c%c%c\n", a[3], a[2], a[1], a[0]);
    }
    
    return 0;
}
*/