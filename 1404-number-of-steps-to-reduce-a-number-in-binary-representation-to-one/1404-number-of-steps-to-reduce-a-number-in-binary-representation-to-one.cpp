class Solution {
public:
    int numSteps(string s) {
        int num = bitod(s);
        int steps = 0;
        while(num != 1){
            if(num % 2 == 0){
                steps++;
                num /= 2;
            }
            else{
                steps++;
                num++;
            }
        }
        return steps;
    }
    int bitod(string s){
       int temp = 0, i = 0, j = s.size() -1 , res = 0;
       while(j > -1){
        int temp = s[j]-'0';
        res+= temp*pow(2,i);
        i++; j--;
       }
       return res;
    }
};