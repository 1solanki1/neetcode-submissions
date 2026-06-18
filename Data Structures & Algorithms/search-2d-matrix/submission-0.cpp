class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int row=mat.size();int col=mat[0].size();
        int st=0,end=row*col-1;
        while(st<=end){
            int mid=st+(end-st)/2;int c;
           int r=mid/col;
            c=mid%col;
            if(mat[r][c]<tar)st=mid+1;
            else if(mat[r][c]>tar)end=mid-1;
            else{return true;}
        }return false;

    }
};
