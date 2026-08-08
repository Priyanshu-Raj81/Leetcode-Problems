class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len = nums.size();
        for(int i=0; i<len; i++){
            int count = 0;
            for(int j=0; j<len;j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(count==1)
            return nums[i];
        }
        return 1;
    }
};