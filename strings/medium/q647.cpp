class Solution {
public:
    int countSubstrings(string s) {
        int n=s.length();
        int count=0;
        for(int i=0;i<n;i++)
        {
            count+=expand(s,i,i);
            count+=expand(s,i,i+1);

        }
        return count;
    }

    int expand(string s,int l,int r)
    {
        int count=0;
        while(l>=0 && r<s.length() && s[l]==s[r])
        {
            count++;
            l--;
          r++;
        }
        return count;
    }
};