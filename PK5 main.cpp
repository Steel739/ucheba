#include <stdio.h>

void convert(int time, int* minutes, int* seconds);

int main () {
    int totalSeconds = 100;
    int mins, secs;

    convert(totalSeconds, &mins, &secs);

    printf("%d seconds = %d minutes and %d seconds\n", totalSeconds, mins, secs);
    return 0;
}

void convert(int time, int* minutes, int* seconds) {
    *minutes = time / 60;
    *seconds = time % 60;
}
