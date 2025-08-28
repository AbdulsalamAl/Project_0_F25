#include <stdlib.h>
#include <time.h>

char* rand_string(int length) {
    static const char charset[] =
        "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *s = malloc((length + 1) * sizeof(char));
    if (!s) return NULL;
    for (int i = 0; i < length; i++) {
        int key = rand() % (int)(sizeof(charset) - 1);
        s[i] = charset[key];
    }
    s[length] = '\0';
    return s;
}
