#include <stdio.h>
#include <string.h>

// 判断字符是否是大写字母
int isUpper(char ch);
// 打印一个单词
void printWordMatrix(char *w, int len, char Matrix[][6]);

int main() {
    int x = 26 * 7;
    int y = 6;
    // 获取输入并分别放置到两个数组 英文矩阵数组 && 句子数组
    char matrix[x][y];
    for (int i = 0; i < x + 1; i++) {
        if (i == x) {
            // 将英文矩阵数组最后的空格符吸收
            getchar();

            // 输入一个完整的单词后，就输出矩阵
            char ch;
            char result[10] = {0};
            int index = 0, newline = 0;
            while((ch = getchar()) != '\n') {
                if (!isUpper(ch)) {
                    result[index] = '\0';
                    int len = strlen(result);
                    if (len != 0) {
                        // 输出额外的空行，首尾不得有多余空行
                        if (newline != 0) {
                            printf("\n");
                        }
                        printWordMatrix(result, len, matrix);
                        newline += 1;
                    }

                    // 重置单词数组
                    index = 0;
                    result[index] = '\0';
                } else {
                    result[index++] = ch;
                }
            }

            // 解决输入案例的句子最后一个字符为 大写英文字母 的情况
            if (strlen(result) != 0) {
                if (newline != 0) {
                    printf("\n");
                }
                printWordMatrix(result, strlen(result), matrix);
            }
        } else {
            // 英文字符矩阵数组
            scanf("%s", matrix[i]);
        }
    }

    return 0;
}

// 判断字符是否是大写字母
int isUpper(char ch) {
    // if ('A' <= ch && ch <= 'Z') {}

    int num = ch - 'A';
    if (0 <= num && num <= 25) {
        return 1;
    } else {
        return 0;
    }
}

// 打印一个单词
void printWordMatrix(char *w, int len, char Matrix[][6]) {
    // 打印行数为 7 次，因此字符矩阵为 7 * 5
    for (int i = 0; i < 7; i++) {
        // 打印单词的长度
        for (int j = 0; j < len; j++) {
            int t = w[j] - 'A';
            // 英文矩阵数组的行下标，输出一整行字符串
            int index = t * 7 + i;
            printf("%s", Matrix[index]);

            if (j != len - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}