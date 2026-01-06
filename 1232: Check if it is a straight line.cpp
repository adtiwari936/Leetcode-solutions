class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& cdr) {
        int x0=cdr[0][0];
        int y0=cdr[0][1];
        int x1=cdr[1][0];
        int y1=cdr[1][1];

        for(int i=2; i<cdr.size();i++){
            int x=cdr[i][0];
            int y=cdr[i][1];
            if ((x-x0)*(y1-y0) != (y-y0)*(x1-x0)){
                return false;
            }
        }
        return true;
    }
};
