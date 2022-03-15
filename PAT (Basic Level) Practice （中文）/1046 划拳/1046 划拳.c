#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int a = 0, b = 0;
        for (int i = 0; i < n; i++) {
            int a_shout, a_stroke, b_shout, b_stroke;

            if (scanf("%d %d %d %d", &a_shout, &a_stroke, &b_shout, &b_stroke) == 4) {
                if (a_stroke == a_shout + b_shout && b_stroke == a_shout + b_shout) {
                    continue;
                }

                if (a_stroke == a_shout + b_shout) {
                    a += 1;
                }

                if (b_stroke == a_shout + b_shout) {
                    b += 1;
                }
            }
        }

        printf("%d %d\n", b, a);
    }

    return 0;
}