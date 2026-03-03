#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
    char findKthBit(int n, int k) {
        int flipCount = 0;
        
        while (n > 1) {
            int totalLength = (1 << n) - 1;
            int mid = (totalLength / 2) + 1;

            if (k == mid) {
                // If k is the middle bit, it's '1'. 
                // We check if it was flipped an even or odd number of times.
                return (flipCount % 2 == 0) ? '1' : '0';
            } else if (k > mid) {
                // If k is in the right half, it's a flipped and mirrored 
                // version of the left half.
                k = totalLength - k + 1;
                flipCount++; // Track that we flipped this bit
            }
            // If k < mid, we just move to the next smaller string Sn-1
            n--;
        }

        // Base case: S1 is always '0'
        return (flipCount % 2 == 0) ? '0' : '1';
    }
};