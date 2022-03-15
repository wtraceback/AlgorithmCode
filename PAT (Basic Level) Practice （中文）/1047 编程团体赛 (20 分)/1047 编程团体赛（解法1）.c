#include <stdio.h>
#include <string.h>     // 使用初始化函数 memset
#include <stdlib.h>     // 使用 atoi 函数，把字符串转换成整型数的一个函数

// 获取队伍名
int getTeamName(char *arr);
// 获取分数
int getScore(char *arr);

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        int team[1001];
        // 给数组附初始值
        memset(team, -1, sizeof(team));

        char arr[20] = {'\0'};
        for (int i = 0; i < n; i++) {
            getchar();
            scanf("%[^\n]", arr);
            int team_name = getTeamName(arr);
            int score = getScore(arr);
            if (team[team_name] == -1) {
                team[team_name] = score;
            } else {
                team[team_name] += score;
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

int getTeamName(char *arr) {
    char team_name[10] = {'\0'};

    int i = 0;
    while (arr[i] != '-') {
        team_name[i] = arr[i];
        i++;
    }

    return atoi(team_name);
}

int getScore(char *arr) {
    char score[10] = {'\0'};

    // 忽略队员编号
    int i = 0;
    while (arr[i] != ' ') {
        i++;
    }

    int j = 0;
    while (arr[i] != '\0') {
        score[j++] = arr[i++];
    }

    return atoi(score);
}