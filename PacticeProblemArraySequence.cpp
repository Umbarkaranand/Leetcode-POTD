class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> ListTemp(nums.size(),1);
        int n = nums.size();
        int ans=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    if(ListTemp[j]+1>ListTemp[i]){
                        ListTemp[i]=ListTemp[j]+1;
                    }
                    ans=max(ans,ListTemp[i]);
                }

            }
        }

        return ans;
    }
};
