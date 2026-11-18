#include <stdio.h>

int sumOdd(int nums[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (nums[i] % 2 != 0) {
            sum += nums[i];
        }
    }
    return sum;
}

int main() {
    int nums[5];

    for (int i = 0; i < 5; i++) {
        printf("Sonlar kiriting %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    printf("\nToq sonlar yig'indisi: %d\n", sumOdd(nums, 5));

    return 0;
}
