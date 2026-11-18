#include <stdio.h>

int countAboveAverage(int nums[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += nums[i];
    }
    double avg = sum / size;

    int count = 0;
    for (int i = 0; i < size; i++) {
        if (nums[i] > avg) {
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

    printf("\nO'rtacha qiymatdan katta elementlar soni: %d\n", countAboveAverage(nums, 5));

    return 0;
}
