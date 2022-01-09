#include <stdio.h>

int main() {
    char *pinyn[] = {
        "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"
    };

    // 获取输入的字符串
    char str[105];
    scanf("%s", str);

    int sum = 0;
    int i = 0;
    while (str[i] != '\0') {
        // switch 或 '0123456789'取下标
        //将字符转换为数字
        sum += str[i] - '0';
        i += 1;
    }

    // 求 sum 的长度
    int len = 1;
    int temp = sum / 10;
    while(temp != 0) {
        temp = temp / 10;
        len += 1;
    }

    // 将 sum 拆分然后放入数组中
    int arr[len];
    for (int i = len - 1; i >= 0; i--) {
        arr[i] = sum % 10;
        sum = sum / 10;
    }

    // 输出拼音
    for(int i = 0; i < len; i++) {
        if (i == len - 1) {
            printf("%s", pinyn[arr[i]]);
        } else {
            printf("%s ", pinyn[arr[i]]);
        }
    }
    printf("\n");

    return 0;
}