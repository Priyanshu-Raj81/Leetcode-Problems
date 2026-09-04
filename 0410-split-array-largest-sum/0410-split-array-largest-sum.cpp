class Solution {
public:
    bool isvalid(vector<int>& nums,int n, int k, int maxAllowedPages){
        int student = 1, pages = 0;

        for(int i=0;i<n;i++){
            if(nums[i] > maxAllowedPages){
                return false;
            }
            if(pages + nums[i] <= maxAllowedPages){
                pages += nums[i];
            }
            else{
                student++;
                pages = nums[i];
            }
        }
        return student > k ? false : true;
    }


    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(k>n){
            return -1;
        }
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += nums[i];
        }

        int start = 0;
        int end = sum;
        int ans = -1;

        while(start<=end){
            int mid = start + (end-start)/2;
            
            if(isvalid(nums,n,k,mid)){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
    }
};