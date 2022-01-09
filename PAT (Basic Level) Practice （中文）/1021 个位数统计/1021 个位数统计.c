#include <stdio.h>

int main() {
    // 获取输入的字符串
    char str[1001];

    // 用条件判断语句对 scanf 的内容进行判断保护
    // 避免输入非法字符，导致返回值为 0 或者出错
    if (scanf("%s", str)) {
        // 在输入有效的情况下，执行本逻辑块代码
        int nums[10] = {0};

        int i = 0;
        while(str[i] != '\0') {
            // switch 或 '0123456789'取下标
            //将字符转换为数字
            int index = str[i] - '0';
            nums[index] += 1;
            i += 1;
        }

        // 打印输出结果
        for(int j = 0; j < 10; j++) {
            if (nums[j] != 0) {
                printf("%d:%d\n", j, nums[j]);
            }
        }
    }

    return 0;
}