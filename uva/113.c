#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    unsigned int n;
    char p[128];

    for (;;) {
        if (0 >= scanf("%u", &n)) {
            break;
        }
        scanf("%s", p);

        /* XXX We might need to filter p */

        double log10_p;
        if (strlen(p) > 9) {
            char t[10];
            strncpy(t, p, sizeof(t) - 1);
            log10_p = log10(atoi(t)) + strlen(p) - 9;
        } else {
            log10_p = log10(atoi(p));
        }

        double t = log10_p / n;

        printf("%u\n", (unsigned int) (pow(10, t) + 0.5));
    }

    return 0;
}
