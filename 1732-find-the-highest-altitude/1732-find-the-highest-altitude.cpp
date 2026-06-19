class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = gain[0], mx = gain[0];
        for(int i = 1; i < gain.size(); i++){
            sum += gain[i];
            if(mx < sum) mx = sum;
        }
        return mx < 0 ? 0: mx;
    }
};