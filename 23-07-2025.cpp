class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int n = s.size();

        int maxValuex=0,minValuey=0,maxValuey=0,minValuex=0;
        if(x>y){
            maxValuex=x;
            minValuey=y;
        }else{
            minValuex=x;
            maxValuey=y;
        }

       stack<char> st;
       int totalScore=0;
       for(int i=n-1;i>=0;i--){
            if(st.empty()){
                st.push(s[i]);
            }else{
                if(!st.empty() and maxValuex==x and st.top()=='b' and s[i]=='a'){
                    totalScore+=x;
                    st.pop();
                }else if(!st.empty() and maxValuey==y and st.top()=='a' and s[i]=='b'){
                    totalScore+=y;
                    st.pop();
                }else{
                    st.push(s[i]);
                }
            }
       }

        string s1="";
        while(!st.empty()){
            s1+=st.top();
            st.pop();
        }

        for(int i=s1.size()-1;i>=0;i--){
            if(st.empty())st.push(s1[i]);
            else{
                if(!st.empty() and minValuex==x and st.top()=='b' and s1[i]=='a'){
                    totalScore+=x;
                    st.pop();
                }
                else if(!st.empty() and minValuey==y and st.top()=='a' and s1[i]=='b'){
                    totalScore+=y;
                    st.pop();
                }else{
                    st.push(s1[i]);
                }
            }
        }
     
       return totalScore;

    }
};
