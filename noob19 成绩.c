#include <stdio.h>
typedef float hihi;

int main() {
    int a, b, c,s;
    hihi d, e, g;  // s 也改为 hihi 类 
    scanf("%d%d%d", &a, &b, &c);
    d = 20.0f / 100.0f;  // 0.2
    e = 30.0f / 100.0f;  // 0.3  
    g = 50.0f / 100.0f;  // 0.4
    s = a * d + b * e + c * g;  // 使用 g 而不是未定义的 f 
    printf("%d", s);  // 用 %f 输出浮点数
    return 0;
}//要是不加f后缀得不出正确的结果，d,e,g的运算，会当作整数输入，然后算出得0；