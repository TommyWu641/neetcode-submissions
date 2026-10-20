class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(const int i:nums){
            mp[i]++;
        }
        vector<pair<int,int>> v;
        for(auto& i:mp){
            v.push_back(i);
        }
        sort(v.begin(),v.end(),[](const pair<int,int> & a,const pair<int,int> & b){
            return a.second>b.second;
        });
        vector<int> rv;
        for(int i =0;i<k;i++){
            rv.push_back(v[i].first);
        }
        
        return rv;
    }
};
