#include <stdio.h>

#define BROWN   0
#define CLEAR   1
#define GREEN   2

int main(int argc, const char *argv[])
{
    unsigned int num[9], unmoved[6];
    const char *result[] = {"BCG", "BGC", "CBG", "CGB", "GBC", "GCB"};

    while (0 < scanf("%u %u %u %u %u %u %u %u %u", &num[0], &num[2], &num[1], &num[3], &num[5], &num[4], &num[6], &num[8], &num[7])) {
        int i;

        unsigned int sum = 0;
        for (i = 0; i < sizeof(num) / sizeof(num[0]); i++) {
            sum += num[i];
        }

        unmoved[0] = num[BROWN] + num[3 + CLEAR] + num[6 + GREEN];
        unmoved[1] = num[BROWN] + num[3 + GREEN] + num[6 + CLEAR];
        unmoved[2] = num[CLEAR] + num[3 + BROWN] + num[6 + GREEN];
        unmoved[3] = num[CLEAR] + num[3 + GREEN] + num[6 + BROWN];
        unmoved[4] = num[GREEN] + num[3 + BROWN] + num[6 + CLEAR];
        unmoved[5] = num[GREEN] + num[3 + CLEAR] + num[6 + BROWN];

        unsigned int idx = 0, max = 0;
        for (i = 0; i < sizeof(unmoved) / sizeof(unmoved[0]); i++) {
            if (max < unmoved[i]) {
                max = unmoved[i];
                idx = i;
            }
        }

        printf("%s %u\n", result[idx], sum - max);
    }

    return 0;
}
