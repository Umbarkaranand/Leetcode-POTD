class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(),events.end());
        priority_queue<int,vector<int>,greater<int>> minHeap;

        int n = events.size(),result=0,index=0,day=0;

        while(!minHeap.empty() or index<n){
            if(minHeap.empty()){
                day=events[index][0];
            }

            while(index<n and events[index][0]<=day){
                minHeap.push(events[index][1]);
                index++;
               
            }
            minHeap.pop();
            result++;
            day++;

            while(!minHeap.empty() and minHeap.top()<day){
                minHeap.pop();
            }
        }

        return result;
    }
};
