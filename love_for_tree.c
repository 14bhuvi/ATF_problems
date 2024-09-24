#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, N;
    scanf("%d %d", &n, &N);

    bool visited[N + 1]; 
    for (int i = 0; i <= N; i++) {
        visited[i] = false;
    }

    for (int i = 0; i < n; i++) {
        int xi;
        scanf("%d", &xi);

        if (!visited[xi]) { 
            for (int j = xi; j <= N; j += xi) {
                visited[j] = true; 
            }
        }
    }

    int distinct_levels = 0;
    for (int i = 1; i <= N; i++) {
        if (visited[i]) {
            distinct_levels++; 
        }
    }

    printf("%d\n", distinct_levels);

    return 0;
}
