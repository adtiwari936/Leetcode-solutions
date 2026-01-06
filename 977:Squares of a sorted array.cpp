class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n= nums.size();
        vector<int>answer(n);
        int left=0,right=n-1;
        int pos=n-1;
        while(left<=right){
            int lsq=nums[left]*nums[left];
            int rsq=nums[right]*nums[right];
            if(lsq>=rsq){
                answer[pos--]=lsq;
                left++;
            }
            else{
                answer[pos--]=rsq;
                right--;
            }
        }
        return answer;
    }
};
