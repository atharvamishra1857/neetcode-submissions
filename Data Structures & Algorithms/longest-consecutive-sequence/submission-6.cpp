class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()){
            return 0;
        }

        unordered_set<int> unique_numbers;

        for(auto num: nums){
            unique_numbers.insert(num);
        }

        vector<int> numbers;
        for(auto& ele: unique_numbers){
            numbers.push_back(ele);
        }

        sort(numbers.begin(), numbers.end());

        int count = 1;
        int best = 1;

        for(int i = 0; i<(int)(numbers.size()-1); i++){
            if(numbers[i] == (numbers[i+1]-1)){
                count++;
            }else{
                count = 1;
            }

            best = max(count, best);
        }

        return best;
    } 
};
