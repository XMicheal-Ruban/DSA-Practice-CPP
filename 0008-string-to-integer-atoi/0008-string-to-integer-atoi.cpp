#include <iostream>
#include <string>
#include <climits>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        
        // 1. Skip leading whitespaces
        while (i < n && s[i] == ' ') i++;
        
        // 2. Handle sign
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') sign = -1;
            i++;
        }
        
        // 3. Convert digits and handle overflow
        long result = 0; // Use long to detect overflow
        while (i < n && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');
            
            // Check for overflow/underflow immediately
            if (sign == 1 && result > INT_MAX) return INT_MAX;
            if (sign == -1 && -result < INT_MIN) return INT_MIN;
            
            i++;
        }
        
        return (int)(result * sign);
    }
};