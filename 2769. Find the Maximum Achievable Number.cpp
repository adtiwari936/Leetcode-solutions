class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int x=num+t*2;
        int q=x;
        for(int i=1;i<=t;i++){
            num+=1;
            q-=1;
            if(q=num){
                return x;
            }
        }
        return 0;
    }
};
