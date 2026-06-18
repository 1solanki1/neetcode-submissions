class Solution {
public:
    int minEatingSpeed(vector<int>& pile, int tar) {
        int n=pile.size();
   
 int st=1;int end=0;

 for(int x:pile)end=max(end,x);
 while(st<end){
  int mid=st+(end-st)/2;
  int hour=0;

for(int x:pile)hour+=(x+mid-1)/mid;


 if(hour<=tar)end=mid;
else st=mid+1;
 }return st;



        
       
    }
};
