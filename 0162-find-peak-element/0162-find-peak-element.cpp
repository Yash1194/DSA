class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] > nums[mid + 1]) {
                // We are on the decreasing side.
                // A peak is at mid or somewhere to the left.
                right = mid;
            } 
            else {
                // We are on the increasing side.
                // A peak must be to the right.
                left = mid + 1;
            }
        }

        return left;
    }
};