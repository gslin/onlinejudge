#include <stdio.h>
#include <string.h>

void reverse(char *str)
{
    char *start = str, *end = str + strlen(str) - 1;

    while (start < end) {
        *start ^= *end;
        *end ^= *start;
        *start ^= *end;

        start++;
        end++;
    }
}

int main(int argc, const char *argv[])
{
    return 0;
}
