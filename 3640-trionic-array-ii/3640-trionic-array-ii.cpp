#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    long long maxSumTrionic(vector<int>& nums) {
        int n = nums.size();
        // Use a safe minimum for long long
        long long res = -2e18; 

        for (int i = 1; i < n - 2; ) {
            int a = i, b = i;
            long long net = nums[a];

            // 1. MIDDLE: Find the Descent (The Valley)
            // Correction: strictly decreasing (nums[b] > nums[b+1])
            while (b + 1 < n && nums[b] > nums[b + 1]) { 
                net += nums[++b];
            }

            // If no descent found, just move iterator and continue
            if (b == a) { 
                i++; 
                continue; 
            }

            int c = b;
            long long left = 0, right = 0;
            long long lx = -2e18, rx = -2e18; // Reset max trackers

            // 2. LEFT FLANK: Find the Ascent backwards from 'i'
            // We look for the "Best Suffix" of the left slope
            while (a - 1 >= 0 && nums[a - 1] < nums[a]) {
                left += nums[--a];
                lx = max(lx, left);
            }
            if (a == i) { i++; continue; } // Must have a left slope

            // 3. RIGHT FLANK: Find the Ascent forwards from 'c'
            // We look for the "Best Prefix" of the right slope
            while (b + 1 < n && nums[b + 1] > nums[b]) {
                right += nums[++b];
                rx = max(rx, right);
            }
            if (b == c) { i++; continue; } // Must have a right slope

            // Calculate Max Sum for this specific N-shape
            // lx (best left part) + net (whole middle part) + rx (best right part)
            res = max(res, lx + net + rx);

            // Optimization: Skip processed segment
            i = b;
        }
        
        return res;
    }
};