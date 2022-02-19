#include <stdio.h>
#include <string.h>

int main() {
    char arr[11];
    int d;
    if (scanf("%s %d", arr, &d) == 2) {
        // 数组的长度
        int len = strlen(arr);

        // 将 arr 转为整数 a
        int a = 0;
        for (int i = 0; i < len; i++) {
            a = a * 10 + (arr[i] - '0');
        }

        // 根据给定的数目，翻转数组
        char target[11];
        int j = 0;
        for (int i = len - d; i < len; i++) {
            target[j++] = arr[i];
            arr[i] = '\0';
        }
        target[j] = '\0';

        // 连接两个数组，组成目标数组
        strcat(target, arr);

        // 将 target 转为整数 b
        int b = 0;
        for (int i = 0; i < len; i++) {
            b = b * 10 + (target[i] - '0');
        }

        double f = (double) b / a;
        printf("%.2f\n", f);
    }

    return 0;
}

/*
    字符串转整数：
    使用 stdlib.h 库中的 atoi 函数：
    C 库函数 int atoi(const char *str) 把参数 str 所指向的字符串转换为一个整数（类型为 int 型）。

    // 将 arr 转为整数 a
    int a = atoi(arr);
*/