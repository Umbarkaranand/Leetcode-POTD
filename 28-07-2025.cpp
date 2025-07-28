class Solution {
public:
    int solve(vector<int>& nums,int index,int target,int curOr){
        //base case
        if(index==nums.size())return curOr==target? 1:0;

        //recursive case 
        int picked = solve(nums,index+1,target,curOr|nums[index]);
        int noPicked = solve(nums,index+1,target,curOr);

        return picked+noPicked;
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int target=0;
        for(auto a:nums)
            target = target | a;
        
        return solve(nums,0,target,0);
    }
};
