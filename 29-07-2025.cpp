class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        
        unordered_set<int> prevalues,allvalues;
        for(auto a:arr){
            unordered_set<int> cur;

            cur.insert(a);
            for(auto value:prevalues){
                cur.insert(a | value);
            }
            prevalues=cur;
            allvalues.insert(cur.begin(),cur.end());
        }
        
        return allvalues.size();
    }
};
