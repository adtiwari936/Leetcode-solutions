class Solution {
public:
    double average(vector<int>& salary) {
        double sum = accumulate(salary.begin(),salary.end(),0);
        double p =  *min_element(salary.begin(),salary.end());
        double q =  *max_element(salary.begin(),salary.end());
        double rem = sum-q-p;
        double t=salary.size()-2;
        double average = rem/t;
        return average;
    }
};
