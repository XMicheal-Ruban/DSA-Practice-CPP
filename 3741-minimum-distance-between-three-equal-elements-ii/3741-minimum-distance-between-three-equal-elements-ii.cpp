class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        vector<array<int, 2>> v(100001, {-1 , -1});
        int ans = 1e9;
        for(int i = 0; i < nums.size(); i++){
            int x = nums[i];
            if(v[x][0] == -1){
                v[x][0] = i;
            }
            else if (v[x][1] == -1){
                v[x][1] = i;
            }
            else {
                ans = min (ans, 2 * (i - v[x][0]));
                v[x][0] = v[x][1];
                v[x][1] = i;
            }
        }
        return (ans == 1e9) ? -1 : ans;
    }
};