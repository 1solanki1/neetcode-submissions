class Solution {
public:
    int search(vector<int>& num, int tar) {
        int n=num.size();
        int st=0,end=n-1;

        while(st<=end){
            int mid=st+(end-st)/2;

            if(tar<num[mid])end=mid-1;
            else if(tar>num[mid])st=mid+1;
            else return mid;
        }return -1;
    }
};
