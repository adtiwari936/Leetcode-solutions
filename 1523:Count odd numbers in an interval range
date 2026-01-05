class Solution {
public:
    int countOdds(int low, int high) {
        int n = high - low +1;
        int p;
        if(high%2==0 && low%2==0) p = n/2;
        else if ((high%2!=0 && low%2==0)||(high%2==0 && low%2!=0)) p = n/2;
        else p = (n/2)+1;
        return p;
    }
};
