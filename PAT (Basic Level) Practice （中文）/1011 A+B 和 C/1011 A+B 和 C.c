#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n)) {
        // 接收输入
        long long int a, b, c;
        int arr[10] = {0};
        for (int i = 0; i < n; i++) {
            if (scanf("%lld %lld %lld", &a, &b, &c) == 3) {
                if (a + b > c) {
                    arr[i] = 1;
                } else {
                    arr[i] = 0;
                }
            }
        }

        // 打印输出
        for (int j = 0; j < n; j++)  {
            if (arr[j] == 1) {
                printf("Case #%d: true\n", j + 1);
            } else {
                printf("Case #%d: false\n", j + 1);
            }
        }
    }

    return 0;
}

// 解法2：
// 定义 a、b、c 三个 long long 的数组，用于接收数据，最后再进行比较输出，缺点是空间消耗更大