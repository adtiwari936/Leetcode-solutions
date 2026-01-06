class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        int i;
        for (i = 0;i<(nums.size()-2); i++){
            int a=nums[i],b=nums[i+1],c=nums[i+2];
            if (b+c>a){
                return a+b+c;
            }
        }
        return 0;
    }
};
