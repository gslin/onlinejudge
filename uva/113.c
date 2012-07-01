#include <stdio.h>
#include <string.h>

void reverse(char *str)
{
    char *start = str, *end = str + strlen(str) - 1;

    while (start < end) {
        /* This is actually swap hack */
        *start ^= *end;
        *end ^= *start;
        *start ^= *end;

        start++;
        end++;
    }
}

int main(int argc, const char *argv[])
{
    unsigned int n;
    char p[128];

    for (;;) {
        if (0 >= scanf("%u", &n)) {
            break;
        }
        scanf("%s", p);
        reverse(p);
    }

    return 0;
}
