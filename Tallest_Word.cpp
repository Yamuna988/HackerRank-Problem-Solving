#include <stdio.h>
#include <string.h>

int designerPdfViewer(int h_count, int* h, char* word)
{
    int maxHeight = 0;
    int i;

    for (i = 0; word[i] != '\0'; i++)
    {
        int index = word[i] - 'a';

        if (h[index] > maxHeight)
        {
            maxHeight = h[index];
        }
    }

    return maxHeight * strlen(word);
}

int main()
{
    int h[26];
    char word[100];
    int i;

    for (i = 0; i < 26; i++)
    {
        scanf("%d", &h[i]);
    }

    scanf("%s", word);

    printf("%d\n", designerPdfViewer(26, h, word));

    return 0;
}
