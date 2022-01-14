#include <stdio.h>

int main() {
    int a, b, d;
    if (scanf("%d %d %d", &a, &b, &d) == 3) {
        int sum = a + b;
        int arr[32] = {0};    // int 类型有 32 个二进制位

        // 将数值转换为指定的进制
        // 使用 do while 是为了处理 sum=0 的情况
        int n = 0;
        do {
            arr[n] = sum % d;
            sum = sum / d;
            n++;
        } while (sum != 0);

        // 打印输出数组中的进制数
        for (int i = n - 1; i >= 0; i--) {
            printf("%d", arr[i]);
        }
        printf("\n");
    }

    return 0;
}