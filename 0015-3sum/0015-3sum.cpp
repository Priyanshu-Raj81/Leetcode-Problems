class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());

        int n = nums.size();

        for(int i = 0; i<n-2; i++){     //n-2 used for triplet, bczz it takes minimum three elements


            if(i > 0 && nums[i] == nums[i-1]){  //skip repeated element for computataion
                continue;
            }

            int left = i+1;
            int right = n-1;

            while(left < right){  // skip duplicate left
                int sum = nums[i] + nums[left] + nums[right];

                if(sum == 0){
                    result.push_back({nums[i], nums[left], nums[right]});

                    while(left < right && nums[left] == nums[left + 1]){
                        left++;
                    }
                    // skip duplicate right
                    while(left < right && nums[right] == nums[right-1]){
                        right--;
                    }

                    left++;
                    right--;


                }
                else if(sum<0){
                    left++;
                }

                else{
                    right--;
                }
            }
        }
        return result;
    }
};