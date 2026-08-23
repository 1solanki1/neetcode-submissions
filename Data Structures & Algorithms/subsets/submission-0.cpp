class Solution {
public:
vector<vector<int>>res;

void  solve( vector<int>&num,int i,vector<int>&ans) {
if(i==num.size()){
res.push_back(ans);return;}

ans.push_back(num[i]);
 solve(num,i+1,ans);
 ans.pop_back();
 solve(num,i+1,ans);
}

vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ans;
        solve(nums,0,ans);
        return res;

    }
};
