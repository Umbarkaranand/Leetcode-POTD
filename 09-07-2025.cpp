class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        if(eventTime>endTime.back()){
            startTime.push_back(eventTime);
            endTime.push_back(eventTime);
        }

        queue<int> q;
        int maxSum=0,winSum=0,pos=0;
        int lastEndTime=0;
        int n = startTime.size();
        while(pos<n){
            winSum+=(startTime[pos]-lastEndTime);
            maxSum=max(maxSum,winSum);
            q.push(startTime[pos]-lastEndTime);
            while(q.size()>k){
                winSum-=q.front();
                q.pop();
            }
            lastEndTime=endTime[pos];
            pos++;
        }

        return maxSum;
    }
};
