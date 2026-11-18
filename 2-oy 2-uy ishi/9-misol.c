#include <stdio.h>

int countZero(int nums[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (nums[i] == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int nums[5];

    for (int i = 0; i < 5; i++) {
        printf("Sonlar kiriting %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    printf("\nNollar soni: %d\n", countZero(nums, 5));

    return 0;
}
