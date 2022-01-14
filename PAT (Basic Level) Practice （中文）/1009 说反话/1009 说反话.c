#include <stdio.h>
#include <string.h>

int main() {
    char arr[81], temp[81], target[81];

    if (scanf("%[^\n]", arr)) {
        int len = strlen(arr);
        int j = 0, k = 0;

        for (int i = len - 1; i >= 0; i--) {
            // 先将字符倒着放到 临时数组 中
            if (arr[i] != ' ') {
                temp[k] = arr[i];
                k++;
            }

            // 如果遇到空格，就将 临时数组 放置到目标数组中
            if (arr[i] == ' ' || i == 0) {
                for (k = k - 1; k >= 0; k--) {
                    target[j] = temp[k];
                    j++;
                }
                k = 0;
            }

            // 遇到空格就往 目标数组 中添加空格
            if (arr[i] == ' ') {
                target[j] = ' ';
                j++;
            }

            // 在数组最后添加 \0 用来表示字符串的结束
            if (i == 0) {
                target[j] = '\0';
            }
        }

        // 打印输出
        printf("%s\n", target);
    }

    return 0;
}