#include <stdio.h>
#include <stdlib.h>

int main() {
    int H, M;
    float h, m, t;
    scanf("%d %d", &H, &M);

    if (H <= 12 && H >= 1 && M >= 0 && M <= 59) {
        h = H * 30 + 0.5 * M;
        m = 6 * M;
        t = h - m;

        if (t > 180) {
            t = t - 180;
        } else if (t < -180) {
            t = t + 180;
        } else if (t < 0) {
            t = -t;
        }
        printf("%0.3f",t);
    } else {
        printf("輸入的時間不符合條件\n");
    }

    return 0;
}
