class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int i = 0; i < nums.size() ; i++) freq[nums[i]]++;
        priority_queue<pair<int, int>, vector<pair<int,int>> , greater<pair<int,int>>> q;
        for(auto const& [val, f] : freq){
            q.push({f, val});
            if(q.size() > k) q.pop();
        }
        vector<int> ans;
        while(!q.empty()){
            //int temp = q.top().second;
            ans.push_back(q.top().second);
            
            
            
            q.pop();
        }
        return ans;
    }
};