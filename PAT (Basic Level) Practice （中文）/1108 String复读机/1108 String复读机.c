#include <stdio.h>
#include <string.h>

int main() {
    char arr[10005];
    if (scanf("%s", arr) == 1) {
        int target[6] = {0};
        char targetStr[7] = "String";
        int len = strlen(arr);

        // 获取输入的字符中 String 这几个字符的个数
        for (int i = 0; i < len; i++) {
            switch(arr[i]) {
                case 'S':
                    target[0] += 1;
                    break;
                case 't':
                    target[1] += 1;
                    break;
                case 'r':
                    target[2] += 1;
                    break;
                case 'i':
                    target[3] += 1;
                    break;
                case 'n':
                    target[4] += 1;
                    break;
                case 'g':
                    target[5] += 1;
                    break;
                default:
                    ;
            }
        }

        // 获取 target 数组中字符数最多的个数
        // 这边的 target 定义的时候，只能是 int 类型，不能写成 char 类型
        int n = target[0];
        for (int i = 0; i < 6; i++) {
            if (n < target[i]) {
                n = target[i];
            }
        }

        // 打印输出
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 6; j++) {
                if (target[j] != 0) {
                    // 不断的递减目标数组中字符个数的数目，直到字符数目为 0
                    target[j] -= 1;
                    printf("%c", targetStr[j]);
                }
            }
        }
        printf("\n");
    }

    return 0;
}