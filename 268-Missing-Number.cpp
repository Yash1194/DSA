class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int AS = 0;
        int ES = 0;
        for(int i =0; i<n; i++){
            AS += nums[i];
        }
        for(int j=0; j<=n; j++){
            ES += j;
        }
        int Mn = ES-AS;
        return Mn;

    }
};