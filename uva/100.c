#include <stdio.h>

unsigned int count_length(unsigned int x)
{
    unsigned int count;
    for (count = 1; 1 != x; count++) {
        if (0 == x % 2) {
            x /= 2;
        } else {
            x = 3 * x + 1;
        }
    }

    return count;
}

int main(int argc, const char *argv[])
{
    unsigned int x, y;
    while (0 < scanf("%d %d", &x, &y)) {
        unsigned int end, start;
        if (x < y) {
            start = x;
            end = y;
        } else {
            start = y;
            end = x;
        }

        unsigned int i, now = 0;
        for (i = start; i <= end; i++) {

            unsigned int n = count_length(i);
            if (n > now) {
                now = n;
            }
        }

        printf("%u %u %u\n", start, end, now);
    }

    return 0;
}
