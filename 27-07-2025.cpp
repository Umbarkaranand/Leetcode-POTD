class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int valley=0,hill=0;
        stack<int> st;
        
        for(int i=0;i<nums.size()-1;i++){
            if(st.empty()){
                st.push(nums[i]);
            }
            else if(!st.empty() and st.top()<nums[i] and nums[i]>nums[i+1]){
                hill++;
                st.push(nums[i]);
            }
            else if(!st.empty() and st.top()>nums[i] and nums[i]<nums[i+1]){
                valley++;
                st.push(nums[i]);
            }
        }
        return valley+hill;
    }
};
