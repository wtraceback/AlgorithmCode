#include <stdio.h>

int main() {
    int a, d;
    if (scanf("%d %d", &a, &d) == 2) {
        // 获取 a 里面中 d 位的数
        int n = 1;
        for (int i = 0; i < d; i++) {
            n = n * 10;
        }
        int b = a % n;
        int a1 = a / n;

        // 生成新的数 b
        int t = a1;
        while (t != 0) {
            t = t / 10;
            b = b * 10;
        }
        b = b + a1;

        // double f = (double) b / a;
        double f = b * 1.0 / a;
        printf("%.2f\n", f);
    }

    return 0;
}