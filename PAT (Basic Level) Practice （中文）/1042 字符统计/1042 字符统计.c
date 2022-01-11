#include <stdio.h>

int main() {
    // 获取输入的字符串
    char c[1001];

    if (scanf("%[^\n]", c)) {
        // 统计字母出现的次数，然后存储到数组中
        int arr[26] = {0};
        int i = 0;
        while(c[i] != '\0') {
            if ('a' <= c[i] && c[i] <= 'z') {
                int index = c[i] - 'a';
                arr[index] += 1;
            } else if ('A' <= c[i] && c[i] <= 'Z') {
                int index = c[i] - 'A';
                arr[index] += 1;
            }

            i++;
        }

        // 搜索字母出现次数最多的下标
        int max_index = 0;
        for (int j = 1; j < 26; j++) {
            if (arr[max_index] < arr[j]) {
                max_index = j;
            }
        }

        // 打印输出
        printf("%c %d\n", 'a' + max_index, arr[max_index]);
    }

    return 0;
}