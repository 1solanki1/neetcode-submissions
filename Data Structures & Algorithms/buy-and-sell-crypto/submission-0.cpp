class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n=p.size();int pro=0;
        int minn=INT_MAX;
        for(int i=0;i<n;i++){
minn=min(minn,p[i]);

pro=max(pro,p[i]-minn);

        }return pro;
    }
};
