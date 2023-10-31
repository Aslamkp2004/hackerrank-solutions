#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* timeConversion(char* s) {
    int hh, mm, ss;
    char meridian[3];
    char* result = (char*)malloc(9);

    sscanf(s, "%d:%d:%d%s", &hh, &mm, &ss, meridian);

    if (strcmp(meridian, "AM") == 0 && hh == 12) {
        hh = 0;
    } else if (strcmp(meridian, "PM") == 0 && hh != 12) {
        hh += 12;
    }

    snprintf(result, 9, "%02d:%02d:%02d", hh, mm, ss);

    return result;
}

int main() {
    char s[12];
    scanf("%s", s);

    char* result = timeConversion(s);
    printf("%s\n", result);

    free(result);
    return 0;
}
