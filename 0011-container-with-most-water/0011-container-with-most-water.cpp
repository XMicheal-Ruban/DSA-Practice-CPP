class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int maxarea = 0;
        while(left < right){
             int h = (height[left] < height[right]) ? height[left]: height[right];
             maxarea = max(maxarea, (right - left)* h);
             if(height[left] < height[right] ){
                left++;
             } 
             else right--;
        }
        return maxarea;
    }
};