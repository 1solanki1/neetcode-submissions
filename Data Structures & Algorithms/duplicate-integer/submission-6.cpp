class Solution {
public:
    bool hasDuplicate(vector<int>& num) {
        int n=num.size();

        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp.find(num[i])!=mp.end())
            return true;

        
        mp[num[i]]++;}

        return false;
    }
    
};