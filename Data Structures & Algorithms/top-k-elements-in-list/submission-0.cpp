class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequency_map;


        for(auto i: nums){
            frequency_map[i]++;

        }
        int max_freq = 0;
        vector<pair<int, int>> frequency_vector;
        for(auto& pair: frequency_map){
            frequency_vector.push_back({pair.second, pair.first});
        }

        sort(frequency_vector.begin(), frequency_vector.end(), greater<pair<int, int>>());
        vector<int> res;
        for(int i=0; i<k; i++){
            res.push_back(frequency_vector[i].second);
        }

        return res;
    }

};
