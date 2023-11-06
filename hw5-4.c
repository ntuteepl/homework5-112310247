#include <stdio.h>
#include <math.h>

int main() {
    int H, M;
    float angle;

    printf("請輸入時間（小時和分鐘）：");
    scanf("%d %d", &H, &M);

    if (H < 1 || H > 12 || M < 0 || M > 59) {
        printf("輸入的時間不符合條件。\n");
        return 1;
    }

    // 時針每小時移動30度，每分鐘移動0.5度；分針每分鐘移動6度
    float hour_angle = (H % 12) * 30 + M * 0.5;
    float minute_angle = M * 6;

    // 計算時針和分針夾角的絕對值
    angle = fabs(hour_angle - minute_angle);

    // 將角度限制在0到180之間
    if (angle > 180) {
        angle = 360 - angle;
    }

    printf("夾角為：%.3f\n", angle);

    return 0;
}
