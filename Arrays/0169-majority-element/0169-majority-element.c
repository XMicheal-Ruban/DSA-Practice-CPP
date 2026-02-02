int compareInt(void const *a, void const *b)
{
    int intA =  *(const int*)a;
    int intB = *(const int*)b;
    if(intA > intB) return 1;
    if(intA < intB) return -1;
    return 0;
}
int majorityElement(int* nums, int numsSize) {
    qsort(nums , numsSize , sizeof(nums[0]), compareInt);
    int count = 1, maxcount=1;
    for(int i = 1 ; i<numsSize ; i++)
    {
        if(nums[i] == nums[i-1]) count++;
        if(maxcount < count) maxcount = count;
        if(count > (numsSize/2)) return nums[i];
    }
    return nums[0];
}