class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int> prevalues,allvalues;

        for(auto num:arr){
            unordered_set<int> cur;
            cur.insert(num);

            for(auto value:prevalues){
                cur.insert(value | num);
            }

            prevalues=cur;
            allvalues.insert(cur.begin(),cur.end());
        }

        return allvalues.size();
    }
};
