class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = size(bills);
        int i;
        int five=0;
        int ten=0;
        //customer produces $5 and $10 bills
        for (i=0;i<n;i++){
            if (bills[i]==5){
                five+=1;
            }
            else if (bills[i]==10){
                if (five>=1){
                    five-=1;
                    ten+=1;
                }
                else {
                    return false;
                }
            }
            //customer produces $20 bill
            else {
                if (bills[i]==20 && ten>=1 && five>=1){
                    five-=1;
                    ten-=1;
                }
                else if (bills[i]==20 && five>=3){
                    five-=3;
                }
                else {
                    return false;
                } 
            }
        } 
        return true;
    }
};
