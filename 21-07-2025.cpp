class Solution {
public:
    string makeFancyString(string s) {
        string result="";
        char ch=s[0];
        result+=ch;
        int ocr=1;
        for(int i=1;i<s.size();i++){
            if(ch==s[i]){
                ocr++;
            }else{
                ocr=1;
                ch=s[i];
            }

            if(ocr<3){
                result+=s[i];
            }
        }

        return result;
    }
};
