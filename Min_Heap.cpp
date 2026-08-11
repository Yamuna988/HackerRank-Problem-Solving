#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int a[], int n, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && a[left] < a[smallest])
        smallest = left;

    if (right < n && a[right] < a[smallest])
        smallest = right;

    if (smallest != i) {
        swap(&a[i], &a[smallest]);
        heapify(a, n, smallest);
    }
}

int extractMin(int a[], int *n) {
    int min = a[0];
    a[0] = a[*n - 1];
    (*n)--;

    heapify(a, *n, 0);

    return min;
}

void insert(int a[], int *n, int value) {
    int i = *n;
    a[i] = value;
    (*n)++;

    while (i > 0) {
        int parent = (i - 1) / 2;

        if (a[parent] <= a[i])
            break;

        swap(&a[parent], &a[i]);
        i = parent;
    }
}

int cookies(int k, int A_count, int* A) {
    int n = A_count;
    int operations = 0;

    // Build Min Heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(A, n, i);

    while (n > 0 && A[0] < k) {

        if (n < 2)
            return -1;

        int first = extractMin(A, &n);
        int second = extractMin(A, &n);

        int newCookie = first + 2 * second;

        insert(A, &n, newCookie);

        operations++;
    }

    return operations;
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);

    int A[n + 100];

    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    printf("%d\n", cookies(k, n, A));

    return 0;
}
