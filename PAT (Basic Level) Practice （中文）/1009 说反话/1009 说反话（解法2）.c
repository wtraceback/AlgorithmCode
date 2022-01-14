#include <stdio.h>
#include <string.h>

int main() {
    char arr[81];
    if (scanf("%[^\n]", arr)) {
        for (int i = strlen(arr) - 1; i >= 0; i--) {
            // 当遇到空格，就输出后面的字符串
            if (arr[i] == ' ') {
                printf("%s", &arr[i + 1]);
                printf("%c", arr[i]);
                arr[i] = '\0';
            }

            // 如果 i==0 的时候是非空格的，就输出，因为不会有更靠前的数组下标了
            if (i == 0) {
                printf("%s", arr);
            }
        }

        printf("\n");
    }

    return 0;
}