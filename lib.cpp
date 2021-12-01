
#include "lib.h"

bool isChar(char c) {
    int a = int(c);
    return ((65 <= a && a <= 90) || (97 <= a && a <= 122));
}

char convert(char c) {
    int a = int(c);
    if (a <= 90)
        a += 32;
    else
        a-= 32;
    return char(a);
}
