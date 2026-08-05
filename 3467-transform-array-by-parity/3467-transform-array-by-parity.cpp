class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        for(int i = 0; i<=end; i++){
            if(nums[i]%2==0){
                nums[i]=0;
            }
            else{
                nums[i]=1;
            }
            
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};