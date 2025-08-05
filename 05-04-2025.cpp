class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
       int unplaced=fruits.size(); 
       int n = unplaced;
       for(int i=0;i<n;i++)
            for(int j=0;j<n;j++){
               if(fruits[i]<=baskets[j]){
                    unplaced--;
                    baskets[j]=0;
                    break;
               }
            }

        return unplaced;
    }
};
