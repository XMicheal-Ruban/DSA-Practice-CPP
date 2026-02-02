int compare(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int size = nums1Size + nums2Size;
    int arr[size], i = 0;
    for(i;i<nums1Size;i++)
        arr[i] = nums1[i]; 
    for(int j = 0 ; j < nums2Size ; j++)
        arr[i++] = nums2[j];
    qsort(arr, size, sizeof(arr[0]), compare);
    int k = size / 2;
    if(size%2 != 0)
        return arr[k];
    float x = (arr[k] + arr[k-1]) / 2.0;
    return x;
}