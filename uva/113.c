#include <stdio.h>
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
    }

    return 0;
}
