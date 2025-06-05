#include<bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        int ns= (1<<n)-1;
        for(int i=0;i<=ns;i++)
        {
              vector<int> list;
            for(int j=0;j<n;j++)
            {
                if(i&(1<<j)) list.push_back(nums[j]);
            }
        ans.push_back(list);
        }
        return ans;
        
    }
};

dfkjdl
