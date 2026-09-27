class Solution {
public:
    int findKthLargest(vector<int>& num, int k) {
        priority_queue<int,vector<int>,greater<int>>mp;
    for(int x:num){mp.push(x);
    if(mp.size()>k){mp.pop();
    }  }
return mp.top();
    }
};
