#include <stdio.h>
int main() {
    int n, key, low, high, mid;
    printf("Enter number of books: ");
    scanf("%d", &n);
    int books[n];
    printf("Enter the Book IDs in ascending order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &books[i]);
    }
    printf("Enter the Book ID to search: ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (books[mid] == key) {
            printf("Book with ID %d is AVAILABLE in the shelf.\n", key);
            return 0; }
        else if (books[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    printf("Book with ID %d is NOT AVAILABLE in the shelf.\n", key);
    return 0;
}
