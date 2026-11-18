#include <stdio.h>

void printPositive(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        if (nums[i] > 0) {
            printf("%d ", nums[i]);
        }
    }
    printf("\n");
}

int main() {
    int nums[5];

    for (int i = 0; i < 5; i++) {
        printf("Sonlar kiriting %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    printf("\nMusbat sonlar: ");
    printPositive(nums, 5);

    return 0;
}
