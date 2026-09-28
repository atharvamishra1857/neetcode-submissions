class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        int total_product = 1;
        int total_zeroes = 0;
        for(auto i: nums){
            if(i==0){
                total_zeroes += 1;
            }else{
                total_product *= i;
            }
        }

        for(auto i: nums){
            if(total_zeroes>1){
                result.push_back(0);
            }else if (total_zeroes == 1){
                if(i == 0){
                    result.push_back(total_product);
                }else{
                    result.push_back(0);
                }
            }else{
                result.push_back(total_product/i);
            }
        }

      

        return result;
    

        
    }
};
