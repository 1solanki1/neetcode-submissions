class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        vector<int>v;
        priority_queue<pair<int,int>>q;

        for(int x:arr)mp[x]++;

        for(auto &x:mp)q.push({x.second,x.first});

        while(k--){v.push_back(q.top().second);
                    q.pop();}


        return v;
    }


};
