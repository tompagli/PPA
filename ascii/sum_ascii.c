#include "sum_ascii.h"
#include <string.h>

int sum_ascii(const char *str) {
    int len = strlen(str);
    int sum;
    for (int i = 0; i<len; i++) {
        sum += str[i];
    }
    return sum;
}
