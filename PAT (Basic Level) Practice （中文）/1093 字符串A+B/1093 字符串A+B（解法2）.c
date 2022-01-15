#include <stdio.h>
#include <string.h>

void get_string(char *pa, int len) {
    // 获取输入的字符串
    fgets(pa, len, stdin);
    if (pa[strlen(pa) - 1] == '\n') {   // 找到 输入字符串 中的最后一个字符
        pa[strlen(pa) - 1] = '\0';      // 如果是回车符，就把它改为 '\0'
    }
}

int main() {
    int len = 1000002;
    char a[len], b[len];

    // 获取输入的字符串
    get_string(a, len);
    get_string(b, len);

    // 字符作为数组下标，数组的值为 1 或 0 辨别当前字符是否重复；若当前字符未重复，则输出。
    int result_arr[256] = {0};
    for (int i = 0; i < strlen(a); i++) {
        // 字符 'a' == 97，隐式转换可能会存在其他问题
        if (result_arr[a[i]] == 0) {
            printf("%c", a[i]);
            result_arr[a[i]] = 1;
        }
    }

    for (int i = 0; i < strlen(b); i++) {
        if (result_arr[b[i]] == 0) {
            result_arr[b[i]] = 1;
            printf("%c", b[i]);
        }
    }

    printf("\n");

    return 0;
}