#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int N;
    scanf("%d", &N);

    int *ladders = (int *)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &ladders[i]);
    }

    qsort(ladders, N, sizeof(int), compare);

    int total_length = 0;
    int max_even_length = 0;

    for (int i = 0; i < N; i++) {
        total_length += ladders[i];
        if (total_length % 2 == 0 && total_length > max_even_length) {
            max_even_length = total_length;
        }
    }

    printf("%d\n", max_even_length);

    free(ladders);
    return 0;
}
