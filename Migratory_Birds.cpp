#include <stdio.h>

int migratoryBirds(int arr_count, int* arr)
{
    int count[6] = {0};

    // Count frequency of each bird
    for(int i = 0; i < arr_count; i++)
    {
        count[arr[i]]++;
    }

    int max = 0;
    int answer = 0;

    // Find the bird with highest frequency
    for(int i = 1; i <= 5; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            answer = i;
        }
    }

    return answer;
}

int main()
{
    int n;

    // Read number of birds
    scanf("%d", &n);

    int arr[n];

    // Read bird IDs
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Call the function
    int result = migratoryBirds(n, arr);

    // Print answer
    printf("%d\n", result);

    return 0;
}
