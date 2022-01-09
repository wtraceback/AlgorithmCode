#include <stdio.h>

int main() {
    char *pinyn[] = {
        "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"
    };

    // 获取输入的字符串
    char str[105];      // 10 ** 100 最多就 100 位数，多留几位
    if (scanf("%s", str)) {
        // 计算字符串中数字的和
        int sum = 0;
        int i = 0;
        while (str[i] != '\0') {
            sum += str[i] - '0';
            i += 1;
        }

        // 将 sum 拆分然后放入数组中
        int arr[5];         // 一百个 9 也就 900，三位数
        int j = 0;
        do {
            int n = sum % 10;
            arr[j] = n;
            sum = sum / 10;
            j++;
        }
        while(sum != 0);

        // 输出拼音
        for (i = j - 1; i >= 0; i--) {
            if (i == 0) {
                printf("%s", pinyn[arr[i]]);
            } else {
                printf("%s ", pinyn[arr[i]]);
            }
        }
        printf("\n");
    }

    return 0;
}