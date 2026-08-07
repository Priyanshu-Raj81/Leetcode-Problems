class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<pair<int,int>> arr;

        // //store value with original index
        // for(int i=0;i<nums.size();i++){
        //     arr.push_back({nums[i],i});
        // }

        // int start = 0;
        // int end = nums.size()-1;
        // sort(arr.begin(), arr.end());
        

        // while(start < end){
        //     int sum = arr[start].first + arr[end].first;

        //     if(sum == target){
        //         return {arr[start].second, arr[end].second};
        //     }
        //     else if (sum < target){
        //         start++;
        //     }
        //     else{
        //         end--;
        //     }
        // }

        // return {};
        int n = nums.size();
        for(int i=0; i<n; i++){
            for(int j= i+1; j<n; j++){
                if(nums[i]+nums[j] == target){
                    return {i,j};
                }
            }
        }
        return{};
               
    }
};