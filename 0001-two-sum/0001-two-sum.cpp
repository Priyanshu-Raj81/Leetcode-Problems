class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> arr;
        for(int i=0;i<nums.size();i++){
            arr.push_back({nums[i],i});
        }

        int start = 0;
        int end = nums.size()-1;
        sort(arr.begin(), arr.end());
        

        while(start < end){
            int sum = arr[start].first + arr[end].first;

            if(sum == target){
                return {arr[start].second, arr[end].second};
            }
            else if (sum < target){
                start++;
            }
            else{
                end--;
            }
        }

        return {};
               
    }
};