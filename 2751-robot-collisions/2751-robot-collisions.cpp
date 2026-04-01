class Solution {
public:
    typedef uint32_t u32;
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        u32 n = positions.size();
        vector<u32> indices(n);
        iota(indices.begin(), indices.end(), 0);
        sort(indices.begin(), indices.end(), [&](u32 i, u32 j){
            return positions[i] < positions[j];
        });
        vector<u32> stack;
        for(u32 idx : indices){
            if(directions[idx] == 'R'){
                stack.push_back(idx);
            }
            else{
                while(!stack.empty() && healths[idx] > 0){
                    u32 topidx = stack.back();
                    if(healths[idx] > healths[topidx]){
                        healths[topidx] = 0;
                        healths[idx] -= 1;
                        stack.pop_back();
                    }
                    else if(healths[idx] < healths[topidx]){
                        healths[topidx] -= 1;
                        healths[idx] = 0;
                        //stack.pop();
                    }
                    else{
                        healths[topidx] = 0;
                        healths[idx] = 0;
                        stack.pop_back();
                    }
                }
            }
        }
        vector<int> result;
        for(int h  : healths){
            if(h > 0) result.push_back(h);
        }
        return result;
    }
};