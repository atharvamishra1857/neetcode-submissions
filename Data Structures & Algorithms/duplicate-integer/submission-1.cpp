class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> saniya;

        for(int atharva: nums){
            saniya[atharva]++;
        }
        for(int atharva: nums){
            if(saniya[atharva] > 1){
                return true;
            }
        }
        return false;
    }
};