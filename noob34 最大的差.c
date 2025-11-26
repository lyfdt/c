#include <stdio.h>
#include<limits.h>
int main() {
    int a;
    scanf("%d",&a);
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=1;i<=a;i++)
    {
        int b;
        scanf("%d\n",&b);
        if(b<min)
        {
            min=b;
        }
        else if(b>max)
        {
            max=b;
        }
    }
    printf("%d\n",max-min);
    return 0;
}//用了inlucde<limits.h>这样的一个函数库，
/*
只有用来limits.h这个头文件才能用INt_max,INt_min;
INT_MIN = -2147483648
INT_MAX = 2147483647
这些值定义在 <limits.h> 头文件中，确保能够容纳任何在 int 范围内的数字.
总结： 使用 INT_MIN 和 INT_MAX 是为了确保初始值不会影响后续的比较，让算法能够正确处理所有可能的输入情况。*/