int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int* arr = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
    arr[0] = -1; arr[1] = -1;
    if (numsSize == 0) return arr;

    // Find left boundary
    int left = 0, right = numsSize - 1, mid;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    if (left >= numsSize || nums[left] != target) return arr;
    arr[0] = left;

    // Find right boundary
    right = numsSize - 1;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (nums[mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }
    arr[1] = right;
    return arr;
}
