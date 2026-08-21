#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    long long n;

    scanf("%s", s);
    scanf("%lld", &n);

    int len = strlen(s);
    long long countA = 0;

    // Count 'a' in the original string
    for (int i = 0; i < len; i++) {
        if (s[i] == 'a') {
            countA++;
        }
    }

    // Complete repetitions
    long long repetitions = n / len;

    // Count a's from complete repetitions
    long long answer = repetitions * countA;

    // Remaining characters
    long long remainder = n % len;

    // Count a's in remaining part
    for (int i = 0; i < remainder; i++) {
        if (s[i] == 'a') {
            answer++;
        }
    }

    printf("%lld\n", answer);

    return 0;
}
