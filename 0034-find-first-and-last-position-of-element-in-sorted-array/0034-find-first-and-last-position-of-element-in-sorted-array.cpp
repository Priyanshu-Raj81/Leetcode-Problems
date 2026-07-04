class Solution {
public:

    int firstOcc(vector<int>& arr, int n, int key) {
        int start = 0, end = n - 1;
        int ans = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == key) {
                ans = mid;
                end = mid - 1;   // left search
            }
            else if (arr[mid] < key) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return ans;
    }

    int lastOcc(vector<int>& arr, int n, int key) {
        int start = 0, end = n - 1;
        int ans = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == key) {
                ans = mid;
                start = mid + 1;  // right search
            }
            else if (arr[mid] < key) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return {
            firstOcc(nums, nums.size(), target),
            lastOcc(nums, nums.size(), target)
        };
    }
};