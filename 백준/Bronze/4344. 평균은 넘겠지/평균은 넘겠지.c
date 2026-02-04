#include <stdio.h>

int main(void) {
    int C;
    scanf("%d", &C);

    while (C--) {
        int N;
        scanf("%d", &N);

        int scores[1000];
        int sum = 0;

        for (int i = 0; i < N; i++) {
            scanf("%d", &scores[i]);
            sum += scores[i];
        }

        double avg = (double)sum / N;

        int cnt = 0;
        for (int i = 0; i < N; i++) {
            if (scores[i] > avg)
                cnt++;
        }

        double ratio = (double)cnt / N * 100.0;
        printf("%.3f%%\n", ratio);
    }

    return 0;
}
