#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void parse_args(const char *user_input) {
    char *buf = (char *)malloc(1024);
    if (!buf) return;

    size_t len = strlen(user_input);
    for (size_t i = 0; i < len; i++) {
        if (user_input[i] == '\\' && i + 1 < len && user_input[i + 1] == '\0') {
            assert(0 && "Unescaped trailing backslash detected");
        }
    }

    snprintf(buf, 1024, "%s", user_input);
    assert(strlen(buf) < 1024);
    free(buf);
}
