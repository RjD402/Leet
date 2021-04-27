// https://leetcode.com/problems/subsets-ii/
class Solution {
    
    void solve(vector<vector<int>>& sol, vector<int>& temp, vector<int>& nums, int begin){
        sol.push_back(temp);
        for(int i=begin;i<nums.size();i++){
            if(i>begin && nums[i-1]==nums[i]) continue;
            temp.push_back(nums[i]);
            solve(sol, temp, nums, i+1);
            temp.pop_back();    
        }
    }
    
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> sol;
        sort(nums.begin(),nums.end());
        vector<int> temp;
        solve(sol, temp, nums, 0);
        return sol;
    }
};