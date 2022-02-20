#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int arr[1000] = { 2, 0, 1, 9};

        // 构造一个无穷数列
        for (int i = 4; i < n; i++) {
            int value = 0;
            for (int j = 1; j <= 4; j++) {
                value += arr[i - j];
            }
            arr[i] = value % 10;
        }

        // 打印输出
        for (int i = 0; i < n; i++) {
            printf("%d", arr[i]);
        }
        printf("\n");
    }

    return 0;
}