#include <stdio.h>
#include <string.h>

char* appendAndDelete(char* s, char* t, int k)
{
    static char ans[4];

    int i = 0;
    int len1 = strlen(s);
    int len2 = strlen(t);

    // Find common characters
    while (i < len1 && i < len2 && s[i] == t[i])
    {
        i++;
    }

    // Minimum operations
    int operations = (len1 - i) + (len2 - i);

    if (operations > k)
    {
        strcpy(ans, "No");
    }
    else if ((k - operations) % 2 == 0)
    {
        strcpy(ans, "Yes");
    }
    else if (k >= len1 + len2)
    {
        strcpy(ans, "Yes");
    }
    else
    {
        strcpy(ans, "No");
    }

    return ans;
}

int main()
{
    char s[100], t[100];
    int k;

    scanf("%s", s);
    scanf("%s", t);
    scanf("%d", &k);

    printf("%s\n", appendAndDelete(s, t, k));

    return 0;

