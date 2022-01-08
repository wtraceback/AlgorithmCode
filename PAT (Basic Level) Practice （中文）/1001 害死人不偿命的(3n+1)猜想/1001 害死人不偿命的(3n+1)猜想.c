#include <stdio.h>

int main() {
    int num;
    if (scanf("%d", &num)) {
        int count = 0;
        while (num != 1) {
            if ((num % 2) == 0) {
                num = num / 2;
            } else {
                num = (3 * num + 1) / 2;
            }

            count++;
        }

        printf("%d\n", count);
    }

    return 0;
}