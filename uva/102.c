#include <stdio.h>

#define BROWN   0
#define CLEAR   1
#define GREEN   2

int main(int argc, const char *argv[])
{
    unsigned int num[9];

    while (0 < scanf("%u %u %u %u %u %u %u %u %u", &num[0], &num[2], &num[1], &num[3], &num[5], &num[4], &num[6], &num[8], &num[7])) {
        int i;

        unsigned int sum = 0;
        for (i = 0; i < sizeof(num) / sizeof(num[0]); i++) {
            sum += num[i];
        }
    }

    return 0;
}
