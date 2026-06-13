class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector <int> res;

        if(s.length()<p.length())
        return res;

        int count=p.length();
        int l=0;

        unordered_map<char,int> pmap,smap;
        for(char c:p)
        pmap[c]++;

        for(int r=0;r<s.length();r++)
        {
            char ch=s[r];
            smap[ch]++;

            if(pmap.count(ch)&& smap[ch]<=pmap[ch])
            count--;

            if(r-l+1>p.length())
            {
                char left=s[l];

                if(pmap.count(left)&& smap[left]<=pmap[left])
                count++;

                smap[left]--;
                l++;
            }

            if(count==0)
            res.push_back(l);
        }
        return res;
    }
};