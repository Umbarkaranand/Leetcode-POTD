class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans=0,maxAns=0;
        int maxi=INT_MIN;
        for(auto a:nums)maxi=max(maxi,a);

        for(auto a:nums){
            if(a==maxi){
                ans++;
            }
            else{
                maxAns=max(ans,maxAns);
                ans=0;
            }
        }
        return max(ans,maxAns);
    }
};
