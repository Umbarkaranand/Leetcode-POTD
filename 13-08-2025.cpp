class Solution {
public:
    string largestGoodInteger(string num) {
        priority_queue<string> pq;

        for(int i=0;i<=num.size()-3;i++){
            string str=num.substr(i,3);
            if(num[i]==num[i+1] and num[i+2]==num[i])
               pq.push(str);
        }

        return pq.empty()? "":pq.top();
    }
};
