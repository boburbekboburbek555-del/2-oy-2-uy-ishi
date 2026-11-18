#include <stdio.h>

void multiplyArray(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        nums[i] = nums[i] * 2;
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int main() {
    int nums[5];

    for (int i = 0; i < 5; i++) {
        printf("Sonlar kiriting %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    printf("\n2 ga ko'paytirilgan massiv: ");
    multiplyArray(nums, 5);

    return 0;
}
