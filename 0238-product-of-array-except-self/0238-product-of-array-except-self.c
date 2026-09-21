#include <stdio.h>
#include <stdlib.h>

int* productExceptSelf(int* nums, int n, int* returnSize) {
    *returnSize = n;

    int* answer = (int*)malloc(n * sizeof(int));

    // Pass 1 (left → right): fill answer with prefix products
    int prefix = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = prefix;       // product of everything LEFT of i
        prefix *= nums[i];        // update running prefix
    }

    // Pass 2 (right → left): multiply by running suffix
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;      // multiply prefix by suffix
        suffix *= nums[i];        // update running suffix
    }

    return answer;
}