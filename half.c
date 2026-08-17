#include <stdio.h>
int main() {
    int n, i, x;
    int left, right, m, c = 0;
    int found = 0, d = -1;
    scanf("%d", &n);
    int a[n];
    int *p = a;
    for (i = 0; i < n; i++) {
        scanf("%d", p + i);
    }
    scanf("%d", &x);
    int max = *p;
    int min = *(p + n - 1);
    if (x > max || x < min) {
        printf("-1\n0");
        return 0;
    }
    left = 0;
    right = n - 1;
    while (left <= right ) {
        m = (left + right ) / 2;
        c++;
        if (*(p + m) == x) {
            found = 1;
            d = m;
            break;
        } else if (*(p + m) > x) {
            left = m + 1;
        } else {
            right = m - 1;
        }
    }
    if (found) {
        printf("%d\n%d",d, c);
    } else {
        printf("-1\n%d", c);
    }
    return 0;
}
