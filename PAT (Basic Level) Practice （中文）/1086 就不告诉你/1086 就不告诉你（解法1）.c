#include <stdio.h>

int main() {
    int a, b, product;
    if (scanf("%d %d", &a, &b) == 2) {
        product = a * b;
        int arr[7] = {0};
        int n = 0;

        do {
            arr[n] = product % 10;
            product = product / 10;
            n++;
        } while(product != 0);

        // 1 * 10 输出的不是 01，而是 1
        int key = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                key = 1;
            }

            if (key == 1) {
                printf("%d", arr[i]);
            }
        }
        printf("\n");
    }

    return 0;
}