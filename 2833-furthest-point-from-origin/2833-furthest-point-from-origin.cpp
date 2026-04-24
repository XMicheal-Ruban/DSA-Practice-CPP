class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l = 0, r =0,mt = 0;
        for(int i = 0; i < moves.size(); i++){
            moves[i] == 'L' ? l++ : (moves[i] == 'R' ? r++ : mt++);
        }
        if(l >= r) l += mt;
        else r+= mt;
        return abs(l - r);
    }
};