class Solution {
public:
    int totalFruit(vector<int>& fruits) {
       int start=0,end=0;
       unordered_map<int,int> basket;
        int ans=INT_MIN;
       while(end<fruits.size()){
            basket[fruits[end]]++;

            while(basket.size()>2){
                basket[fruits[start]]--;
                if(basket[fruits[start]]==0)
                    basket.erase(fruits[start]);
                
                start++;
            }
            

            ans=max(ans,(end-start)+1);
            end++;
       } 
      
        
       return ans;
    }
};
