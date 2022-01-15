#include <stdio.h>

int main() {
    int a, b, product;
    if (scanf("%d %d", &a, &b) == 2) {
        product = a * b;

        if (product != 0) {
            // 把末尾的 0 去掉
            while ((product % 10) == 0) {
                product = product / 10;
            }

            while (product != 0) {
                printf("%d", product % 10);
                product = product / 10;
            }
            printf("\n");
        }
    }

    return 0;
}