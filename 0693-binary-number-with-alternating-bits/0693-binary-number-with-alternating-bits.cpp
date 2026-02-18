class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prev = 3;
        while(n > 0){
            int bit = n % 2;
            n/= 2;
            if(prev == 3) prev = bit;
            else{
                if(bit == prev) return false;
                prev = bit;    
            }
        }
        return true;
    }
};