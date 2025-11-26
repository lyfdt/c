#include <stdio.h>
int main() {
    float C,F,K;
   scanf("%f\n",&K);// 错误代码scanf("%.9f\n", &K);❌ scanf不支持精度修饰符
    C=K-273.15;
    F=C*1.8+32;
printf("%.9f\n",F);
    return 0;
}