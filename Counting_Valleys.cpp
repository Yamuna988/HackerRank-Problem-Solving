\\#include <stdio.h>
#include <stdlib.h>

int countingValleys(int steps, char* path) {
    int altitude = 0;
    int valleys = 0;

    for (int i = 0; i < steps; i++) {
        if (path[i] == 'U') {
            altitude++;
            // If stepping UP brings us back to sea level (0),
            // we just finished exiting a valley!
            if (altitude == 0) {
                valleys++;
            }
        } else if (path[i] == 'D') {
            altitude--;
        }
    }

    return valleys;
}

int main() {
    int steps;
    if (scanf("%d", &steps) != 1) return 0;

    // Allocate memory for path + null terminator
    char* path = (char*)malloc((steps + 1) * sizeof(char));
    if (scanf("%s", path) != 1) {
        free(path);
        return 0;
    }

    int result = countingValleys(steps, path);

    printf("%d\n", result);

    free(path);
    return 0;
}
