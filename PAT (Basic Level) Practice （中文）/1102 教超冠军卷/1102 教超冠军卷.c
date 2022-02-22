#include <stdio.h>
#include <string.h>

typedef struct paper {
    char id[10];
    int price;
    int person;
} Paper;

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        // 初始化销量冠军 a && 初始化销售额冠军 b
        Paper a = { {0}, 0, 0 }, b = { {0}, 0, 0 };
        char id[10] = {0};
        int price, person;

        for (int i = 0; i < n; i++) {
            if (scanf("%s %d %d", id, &price, &person) == 3) {
                // 销量冠军 a；销量可能为 0 的情况
                if (a.person <= person) {
                    memcpy(a.id, id, sizeof(char) * 10);
                    a.price = price;
                    a.person = person;
                }

                // 销售额冠军 b
                int product = price * person;
                if (b.price * b.person <= product) {
                    memcpy(b.id, id, sizeof(char) * 10);
                    b.price = price;
                    b.person = person;
                }
            }
        }

        // 打印输出
        printf("%s %d\n", a.id, a.person);
        printf("%s %d\n", b.id, b.price * b.person);
    }

    return 0;
}