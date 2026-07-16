class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int mx = 0;
        //cout << mx << " ";
        int n = nums.size();
        for(int i = 0; i < n; i++){
            mx = (mx < nums[i]) ? nums[i] : mx;
            nums[i] = gcd(nums[i], mx);
            //cout << pre[i] << " ";
        }
        sort(nums.begin(), nums.end());
        long long ans = 0;
        int left = 0, right = nums.size() - 1;
        while(left < right){
            int g = gcd(nums[left], nums[right]);
            cout << g << " ";
            left++; right--;
            ans+= g;
        }
        return ans;
    }
};