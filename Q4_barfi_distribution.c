#include<stdio.h>

int check(int m, int a[], int n, int k) {
    int sum = 0;
    int q = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (sum > m) {
            sum = 0;
            q++;
        }
    }
    return q >= k;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int l = 0;
    int r = 1000000000; // 10^9
    while (l < r) {
        int mid = (l + r) / 2;
        if (check(mid, a, n, k)) {
            l = mid + 1;
        } else {
            r = mid;
        }
    }
    printf("%d\n", l);
    return 0;
}
