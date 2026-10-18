//3-Print Intersection of 2 sorted arrays-O(m*n)Time Complexity,O(1) Space Complexity


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int slow = a[0], fast = a[0];

    do {
        slow = a[slow];
        fast = a[a[fast]];
    } while (slow != fast);

    slow = a[0];

    while (slow != fast) {
        slow = a[slow];
        fast = a[fast];
    }

    printf("%d", slow);

    return 0;
}
