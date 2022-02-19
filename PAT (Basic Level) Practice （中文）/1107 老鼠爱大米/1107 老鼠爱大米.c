#include <stdio.h>
#include <string.h>

int main() {
    int n = 0, m = 0;
    if (scanf("%d %d", &n, &m) == 2) {
        // 声明并初始化每组最大数的数组
        // int max_arr[101] = {0};
        int max_arr[n];
        // 初始化数组
        memset(max_arr, 0, sizeof(int) * n);

        // 每组玩家的输入 && 每组最大数的计算
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int temp;
                if (scanf("%d", &temp)) {
                    if (max_arr[i] < temp) {
                        max_arr[i] = temp;
                    }
                }
            }
        }

        // 输出每组最大的数
        for (int i = 0; i < n; i++) {
            if (i == n - 1) {
                printf("%d", max_arr[i]);
            } else {
                printf("%d ", max_arr[i]);
            }
        }
        printf("\n");

        // 获取整体最大的数
        int max_num = max_arr[0];
        for (int i = 0; i < n; i++) {
            if (max_num < max_arr[i]) {
                max_num = max_arr[i];
            }
        }

        printf("%d\n", max_num);
    }

    return 0;
}