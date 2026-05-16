//Leetcode-713
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        if(k<=1)
        return 0;

        int l=0,r=0,count=0,prod=1;
        for(r=0;r<n;r++)
        {
            prod*=nums[r];

            while(prod>=k)
            {
                prod/=nums[l];
                l++;
            }
            count+=(r-l+1);
        }
        return count;
        
    }
};