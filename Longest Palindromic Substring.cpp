class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()==0){
            return "";
        }
        string res="";
        for(int i=0;i<s.size();i++){
            int st=i,ed=i;
            while(st>=0&&ed<s.size()&&s[st]==s[ed]){
                st--;
                ed++;
            }
            string temp = s.substr(st+1,ed-st-1);
            res = temp.size()>res.size()? temp : res;

            st=i,ed=i+1;
             while(st>=0&&ed<s.size()&&s[st]==s[ed]){
                st--;
                ed++;
            }
            temp = s.substr(st+1,ed-st-1);
            res = temp.size()>res.size()? temp : res;
        }

        return res;

    }
};
