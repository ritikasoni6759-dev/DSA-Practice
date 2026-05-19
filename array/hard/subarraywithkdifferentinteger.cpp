//Leetcode-992

class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);

        
    }

    int atmost(vector<int> &nums ,int k)
    {
        int n=nums.size();
        int l=0,r=0,count=0;
        unordered_map<int,int> mp;
        for(r=0;r<n;r++)
        {
            mp[nums[r]]++;

            while(mp.size()>k)
            {
                mp[nums[l]]--;
                if(mp[nums[l]]==0)
                mp.erase(nums[l]);
                l++;
            }
            count+=r-l+1;
        }
        return count;
    }
};