#include <stdio.h>

int countGreater(int nums[], int size, int son) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (nums[i] > son) {
            count++;
        }
    }
    return count;
}

int main() {
    int nums[5];
    int n;

    for (int i = 0; i < 5; i++) {
        printf("Sonlar kiriting %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    printf("Taqqoslash uchun son kiriting: ");
    scanf("%d", &n);

    printf("\n%d dan katta sonlar soni: %d\n", n, countGreater(nums, 5, n));

    return 0;
}
