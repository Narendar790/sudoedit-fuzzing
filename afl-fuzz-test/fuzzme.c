#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void process_input(char *data) {
    if (strlen(data) > 5) {
        if (data[0] == 'B' && data[1] == 'U' && data[2] == 'G') {
            printf("Bug detected!\n");
            char *crash = NULL;
            *crash = 'x';  // Intentional crash
        }
    }
}

int main(int argc, char *argv[]) {
    char buf[100];
    FILE *fp = fopen(argv[1], "r");
    fread(buf, 1, sizeof(buf) - 1, fp);
    buf[sizeof(buf) - 1] = '\0';
    fclose(fp);

    process_input(buf);
    return 0;
}
