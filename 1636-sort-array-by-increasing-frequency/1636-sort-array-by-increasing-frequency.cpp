class Solution {
public:

    vector<int> frequencySort(vector<int>& nums) {

        unordered_map<int,int> freq;


        // frequency count
        for(auto x: nums){
            freq[x]++;
        }


        priority_queue<pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>> pq;


        for(auto i:freq){

            pq.push({i.second, -i.first});

        }


        vector<int> ans;


        while(!pq.empty()){

            int frequency = pq.top().first;
            int element = -pq.top().second;

            pq.pop();


            while(frequency--){
                ans.push_back(element);
            }
        }


        return ans;
    }
};