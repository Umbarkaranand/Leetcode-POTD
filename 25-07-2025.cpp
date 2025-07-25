class Solution {
public:
    int maxSum(vector<int>& nums) {
        int maxi=INT_MIN,ans=0;
        unordered_map<int,int> mp;

        for(auto a:nums){
            maxi=max(maxi,a);
            if(a>0)mp[a]++;
        }
        
        for(auto a:mp){
             ans+=a.first;
             cout<<a.first<<" ";
        }
            
        return ans>0? ans : maxi;
    }
};
