class Solution {
public:
    int findGCD(vector<int>& nums) {

        int mini = nums[0];
        int maxi = nums[0];

        // find smallest and largest number
        for(int i = 1; i < nums.size(); i++) {

            mini = min(mini, nums[i]);
            maxi = max(maxi, nums[i]);

        }

        // Euclidean Algorithm
        while(maxi != 0) {

            int temp = maxi;
            maxi = mini % maxi;
            mini = temp;

        }

        return mini;
    }
};