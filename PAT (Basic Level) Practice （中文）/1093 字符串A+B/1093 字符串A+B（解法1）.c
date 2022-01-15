#include <stdio.h>
#include <string.h>

void get_string(char *pa, int len) {
    // 获取输入的字符串
    fgets(pa, len, stdin);
    if (pa[strlen(pa) - 1] == '\n') {   // 找到 输入字符串 中的最后一个字符
        pa[strlen(pa) - 1] = '\0';      // 如果是回车符，就把它改为 '\0'
    }
}

void pick_unique_char_arr(char *source_arr, char *result_arr, int *index) {
    // 将源数组的元素提取到目标数组中
    int n = *index;

    for (int i = 0; source_arr[i] != '\0'; i++) {
        int isExist = 0;
        for (int j = 0; j < n; j++) {
            if (source_arr[i] == result_arr[j]) {
                isExist = 1;
            }
        }

        if (isExist == 0) {
            result_arr[n] = source_arr[i];
            n++;
        }
    }

    *index = n;
}

int main() {
    char a[1000002], b[1000002];

    get_string(a, 1000002);
    get_string(b, 1000002);

    char result[100] = {'\0'};
    int n = 0;
    pick_unique_char_arr(a, result, &n);
    pick_unique_char_arr(b, result, &n);

    printf("%s\n", result);

    return 0;
}