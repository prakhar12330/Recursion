class Solution {
public:
    void recurPermu(int idx,vector<int>& nums,vector<vector<int>> &ans)
    {
        if(idx==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++)
        {
            swap(nums[idx],nums[i]);
            recurPermu(idx+1,nums,ans);
            swap(nums[idx],nums[i]);
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        recurPermu(0,nums,ans);
        return ans;
    }
};
