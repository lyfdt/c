#include <stdio.h>

int main() {
    int arr[100];
    
    // 可以存储各种位数的数字：
    arr[0] = 1;        // 1位数
    arr[1] = 42;       // 2位数  
    arr[2] = 123;      // 3位数
    arr[3] = 4567;     // 4位数
    arr[4] = 12345;    // 5位数
    arr[5] = 2147483647;  // 10位数 (2^31-1，题目允许的最大值)
    
    // 输出验证
    for(int i = 0; i <= 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    return 0;
}