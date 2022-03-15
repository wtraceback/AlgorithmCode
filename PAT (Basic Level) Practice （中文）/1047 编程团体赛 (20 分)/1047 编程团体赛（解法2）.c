#include <stdio.h>
#include <string.h>     // 使用初始化函数 memset

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int team[1001];
        // 给数组附初始值
        memset(team, -1, sizeof(team));
        int teamname, teammate, score;

        for (int i = 0; i < n; i++) {
            if (scanf("%d-%d %d", &teamname, &teammate, &score) == 3) {
                if (team[teamname] == -1) {
                    team[teamname] = score;
                } else {
                    team[teamname] += score;
                }
            }
        }

        // 打印输出
        int champion = 0;
        int champion_score = team[0];
        for (int i = 1; i < 1001; i++) {
            if (champion_score < team[i]) {
                champion = i;
                champion_score = team[i];
            }
        }

        printf("%d %d\n", champion, champion_score);
    }

    return 0;
}
