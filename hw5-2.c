#include <stdio.h>
#include <math.h>

int main() {
    int minutes;
    double cost;

    printf("請輸入通話分鐘數：");
    scanf("%d", &minutes);

    if (minutes <= 800) {
        cost = minutes * 0.9;
    } else if (minutes > 800 && minutes <= 1500) {
        cost = 800 * 0.9 + (minutes - 800) * 0.9 * 0.9;
    } else {
        cost = 800 * 0.9 + 700 * 0.9 * 0.9 + (minutes - 1500) * 0.9 * 0.79;
    }

    // 四捨五入到小數點以下第一位
    cost = round(cost * 10) / 10;

    printf("通話費用為：%.1f\n", cost);

    return 0;
}

