class Solution {
public:
    int search(vector<int>& num, int tar) {
        int st=0;int n=num.size();int end=n-1;
        while(st<=end){
            int mid=(st+end)/2;
            if(num[mid]==tar){return mid;}
            if(num[st]<=num[mid]){
                if(num[mid]<tar||num[st]>tar)st=mid+1;else end=mid-1;
                
            }else{
                if(num[mid]>tar|| num[end]<tar) end=mid-1;else st=mid+1;

            }

        }
        return -1;
    }
};
