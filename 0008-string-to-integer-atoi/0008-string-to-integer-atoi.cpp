class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        while(s[i] == ' ') i++;
        int sign = 1;
        if(i < n && (s[i] =='+' || s[i] == '-' )){
            if(s[i] == '-') sign = -1;
            i++;
        }
        long result = 0;
        while(i < n && isdigit(s[i])){
            result = result*10 + (s[i] - '0');
            if(result > INT_MAX){
                return sign == -1 ? INT_MIN : INT_MAX;                
            } 
            //if(sign == -1 && result > INT_MAX) return INT_MIN;
            i++;
        }
        return (int)(result*sign);
    }
};