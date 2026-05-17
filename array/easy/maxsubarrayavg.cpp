//Leetcode-643

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double windowsum=0;
        double maxsum=0;
        for(int i=0;i<k;i++)
        {
         windowsum+=nums[i];
        }

        maxsum=windowsum;
        for(int j=k;j<n;j++)
        {
            windowsum+=nums[j];
            windowsum-=nums[j-k];
            maxsum=max(maxsum,windowsum);
        }

        return maxsum/k;
        
    }
};