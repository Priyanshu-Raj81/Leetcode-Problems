class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        // int start = 0;
        int end = nums.size()-1;
        vector<int> ans;

        for(int i = 0; i<end; i++){
            if(nums[i+1]-nums[i]==1){
                continue;
            }
             
            for(int j= nums[i]+1; j<nums[i+1];j++){
                ans.push_back(j);
            }
        }
        return ans;
    }
};