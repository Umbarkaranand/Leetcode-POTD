class Solution {
public:
    bool isValid(string word) {
        
        if(word.size()<3)return false;
        
        int vowels=0,constants=0;
        string vowelList = "aeiouAEIOU";

        for(int i=0;i<word.size();i++){
            if(isalpha(word[i])){
                if(vowelList.find(word[i])!=string::npos){
                    	vowels++;
                }else{
                    constants++;
                }
            }else if(!isdigit(word[i])){
                return false;
            }
        }

        return vowels>=1 && constants>=1;
      
    }
};
