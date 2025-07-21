class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        vector<string> ans;
        sort(folder.begin(), folder.end());

        for (auto a : folder) {

            if (ans.empty()) {
                ans.push_back(a);
            } else {
                string prev = ans.back();
                if (a.find(prev+"/") == 0) {
                    continue;
                } else {
                    ans.push_back(a);
                }
            }
        }

        return ans;
    }
};
