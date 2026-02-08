/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int len = mountainArr.length();
        auto binarysearch = [&](int left, int right, int target, bool isUp){
            while(left < right){
                int mid = left + (right - left) / 2;
                int midval = mountainArr.get(mid);
                if(midval == target) return mid;
                if(isUp){
                    if(target > midval){
                        left = mid + 1;
                    }
                    else {
                        right = mid -1;
                    }
                }
                else {
                    if(target > midval){
                        right = mid -1;
                    }
                    else left = mid + 1;
                }
            }
            return -1;
        };
        auto findpeak = [&](){
            int left = 0;
            int right = len -1;
            while(left < right){
                int mid = left + (right - left) / 2;
                if(mountainArr.get(mid) < mountainArr.get(mid + 1)){
                    left = mid +1;
                }
                else right = mid;
            }
            return left;
        };
        int peakidx = findpeak();
        int result = binarysearch(0, peakidx,target, true);
        if (result != -1){
            return result;
        }
        return binarysearch(peakidx+1, len -1, target, false);
    }
    
};