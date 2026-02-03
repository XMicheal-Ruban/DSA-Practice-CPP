class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> s;
        int maxarea = 0;
        for(int i = 0; i<= n; i++){
            int cur = (i == n) ? 0 : heights[i];
            while(!s.empty() && heights[s.top()] > cur){
                int h = heights[s.top()];
                s.pop();
                int w = s.empty() ? 0: i - s.top() -1;
                maxarea = max(maxarea , h * w);
            }
            s.push(i);
        } 
        return maxarea;
    }
};