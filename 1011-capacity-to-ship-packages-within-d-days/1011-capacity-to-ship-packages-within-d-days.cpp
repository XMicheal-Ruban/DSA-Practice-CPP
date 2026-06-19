class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int maxWeight = -1, totalWeight = 0;
        for(int i : weights){
            maxWeight = max(maxWeight, i);
            totalWeight+= i;
        }
        while(maxWeight < totalWeight){
            int mid = maxWeight + (totalWeight - maxWeight) / 2;
            int daysNeeded = 1, curr = 0;
            for(int i : weights){
                if(curr + i > mid){
                    daysNeeded++;
                    curr = 0;
                }
                curr += i;
            }
            if(daysNeeded > days){
                maxWeight = mid + 1;
            }
            else totalWeight = mid;
        }
        return maxWeight;
    }
};