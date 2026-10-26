class Solution {
public:
  int maxArea(vector<int>& h) {
int n=h.size(),i=0,j=n-1, maxwater=0;

while(i<j){
int l=min(h[i],h[j]);
int b=j-i;
int area=l*b;
maxwater= max(area,maxwater);

if(h[i]<h[j])i++;
else j--;}

return maxwater;
}};


