//Leetcode-54

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> vec;

        int srow=0,scol=0;
        int erow=n-1,ecol=m-1;

        while(srow<=erow && scol<=ecol)
        {
            for(int j=scol;j<=ecol;j++)
            vec.push_back(matrix[srow][j]);

            for(int i=srow+1;i<=erow;i++)
            vec.push_back(matrix[i][ecol]);

            for(int j=ecol-1;j>=scol;j--)
            {
                if(srow==erow)
                break;
                vec.push_back(matrix[erow][j]);
            }

            for(int i=erow-1;i>=srow+1;i--)
            {
                if(scol==ecol)
                break;
                vec.push_back(matrix[i][scol]);
            }
            srow++;
            scol++;
            erow--;
            ecol--;
        }
        return vec;
    }
};