class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int> &nums,vector<int> &temp,int index,int n){
        if(index>=n){
            ans.push_back(temp);
            return;
        }

        temp.push_back(nums[index]);
        solve(nums,temp,index+1,n);
        temp.pop_back();
        solve(nums,temp,index+1,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;

        solve(nums,temp,0,n);
        return ans;
    }
};
