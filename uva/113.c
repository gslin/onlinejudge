#include <math.h>
#include <stdio.h>

int main(int argc, const char *argv[])
{
    for (;;) {
        unsigned int n;
        double p;

        if (0 >= scanf("%u", &n)) {
            break;
        }
        scanf("%lf", &p);

        printf("%u\n", (unsigned int) (pow(p, 1.0 / n) + 0.5));
    }

    return 0;
}
