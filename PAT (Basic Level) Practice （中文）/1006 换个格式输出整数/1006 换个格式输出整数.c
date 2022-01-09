#include <stdio.h>

int main() {
    int arr[3] = {0};
    int num;
    if (scanf("%d", &num)) {
        // 将 数字 拆分然后放入数组中
        int j = 0;
        do {
            int n = num % 10;
            arr[j] = n;
            num = num / 10;
            j++;
        }
        while(num != 0);

        // 打印输出
        for (int i = j - 1; i >= 0; i--) {
            int n = 1;
            for (int k = arr[i]; k > 0; k--) {
                if (i == 2) {
                    printf("B");
                } else if (i == 1) {
                    printf("S");
                } else {
                    printf("%d", n);
                    n++;
                }
            }
        }

        printf("\n");
    }

    return 0;
}