#include<stdio.h>
#include<limits.h>
#include<math.h>

int main() {
    int T;  // 试卷数量
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int n;  // 当前试卷的数字个数
        scanf("%d", &n);

        // 动态分配数组或使用足够大的固定大小
        long long arr[n];

        // 初始化极值
        long long max_val = LLONG_MIN;
        long long min_val = LLONG_MAX;
        long long sum = 0;
        double sum_sq = 0.0;

        for (int j = 0; j < n; j++) {
            scanf("%lld", &arr[j]);  // 正确读取到数组

            // 更新极值
            if (arr[j] > max_val) max_val = arr[j];
            if (arr[j] < min_val) min_val = arr[j];

            // 累加和（使用long long防止溢出）
            sum += arr[j];
        }

        // 计算极差
        long long range = max_val - min_val;

        // 计算平均值（转换为double防止精度丢失）
        double average = (double)sum / n;

        // 计算平方和（使用double防止溢出）
        for (int j = 0; j < n; j++) {
            double diff = (double)arr[j] - average;
            sum_sq += diff * diff;  // 直接计算平方，避免pow函数
        }

        // 计算方差
        double variance = sum_sq / n;

        printf("%lld %.3f\n", range, variance);
    }

    return 0;
}