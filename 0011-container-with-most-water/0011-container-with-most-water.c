int max (int a, int b)
{
    return a > b ? a : b;
}
int maxArea(int* height, int heightSize) {
    int left = 0, right = heightSize-1;
    int maxarea = 0;
    while(left < right)
    {
        maxarea = max(maxarea ,(right-left)*(height[left] < height[right] ? height[left] : height[right]) );
        if(height[left] < height[right]) left++;
        else right--;
    }
    return maxarea;
}