class RandomizedSet {
public:
    unordered_map<int, int> map;
    vector<int> nums;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(map.find(val) == map.end()){
            nums.push_back(val);
            map[val] = nums.size() -1 ;
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if(map.find(val) != map.end()){
            int idx = map[val];
            int last = nums.back();
            nums[idx] = last;
            map[last] = idx;
            nums.pop_back();
            map.erase(val);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        int idx = rand() % nums.size();
        return nums[idx];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */