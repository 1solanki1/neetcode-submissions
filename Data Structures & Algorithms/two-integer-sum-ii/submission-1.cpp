class Solution {
public:
    vector<int> twoSum(vector<int>& num, int tar) {
        int n=num.size();
        sort(num.begin(),num.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(num[i]+num[j]==tar){
                    return {i+1,j+1};
                }
            }
        }return {};
    }
};
