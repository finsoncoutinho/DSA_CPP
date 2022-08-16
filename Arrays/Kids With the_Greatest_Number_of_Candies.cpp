// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/


class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int max=0;
        
        vector<bool> result;
        
        for(int i=0;i<candies.size();i++){
            if(max<candies[i]){
                max=candies[i];
            }
        }
        
        for(int j=0; j<candies.size();j++){
            
            if(max<=candies[j]+extraCandies){
                result.push_back(true);
            }
            else{
                result.push_back(false);
            }
        }
        
        return result;
    }
};
