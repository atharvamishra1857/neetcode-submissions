class Solution {
public:
    bool canJump(vector<int>& nums) {
        int nums_size = nums.size();

        int max_length = 0;
        
        for(int i = 0; i<nums_size; i++){
            
            if(i>max_length) return false;

            max_length = max(max_length, i + nums[i]);

            if(max_length >= nums_size-1) return true;



        }
        return true;

       
    }
};
