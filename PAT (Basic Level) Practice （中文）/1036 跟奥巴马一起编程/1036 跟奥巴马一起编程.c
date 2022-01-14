#include <stdio.h>

int main() {
    int n;
    char c;
    if (scanf("%d %c", &n, &c) == 2) {
        // 输出的行数是列数的 50%（四舍五入取整）
        // 求行数：n / 2.0 + 0.5 或 (n + 1) / 2
        int row = n / 2.0 + 0.5;

        // 输出行数
        for (int i = 0; i < row; i++) {
            // 输出列数
            for (int j = 0; j < n; j++) {
                if (i == 0 || i == row - 1) {
                    // 第一行和最后一行，一直输出用户输入的字符
                    printf("%c", c);
                } else {
                    // 第一个和最后一个，输出用户输入的字符
                    if (j == 0 || j == n - 1) {
                        printf("%c", c);
                    } else {
                        printf(" ");
                    }
                }
            }
            printf("\n");
        }
    }

    return 0;
}
