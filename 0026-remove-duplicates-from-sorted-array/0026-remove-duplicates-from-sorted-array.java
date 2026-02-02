class Solution {
    public int removeDuplicates(int[] nums) {
        int k = 0, j = 0;
        int numsSize = nums.length;

        if (numsSize < 2) return numsSize;

        for (int i = 1; i < numsSize; i++) {
            if (nums[i - 1] != nums[i]) {
                k++;
                nums[j++] = nums[i - 1];
                nums[j] = nums[i];
            }
        }

        if (nums[numsSize - 1] != nums[numsSize - 2]) {
            nums[j] = nums[numsSize - 1];
        }

        return k + 1;
    }
        
        
    }
