class Solution {
public:
    string minWindow(string s, string t) {
       unordered_map<char,int>mp;
       int n=s.size(),m=t.size(),r=0,l=0,ans=INT_MAX,ind=0;

       for(auto& ch:t) mp[ch]++;
       
       while(r<n){
        if(mp[s[r]]>0)m--;
//agar mp[r] ki freq 0 se jada h matlab vo substr ka part h varna na h
mp[s[r]]--;

while(m==0){//shrinking
    if(r-l+1<ans){
    ans=r-l+1;
    ind=l;}
    
        mp[s[l]]++;
    if(mp[s[l]]>0)m++;l++;}

r++;
       }
return ans==INT_MAX?"":s.substr(ind,ans);
    }
};