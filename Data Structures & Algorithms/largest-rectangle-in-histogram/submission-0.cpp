class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
       
        stack<int >st;
        int n=arr.size();
        int maxarea=0,nse=0,pse=0;
        for(int i=0;i<=n;i++){
            while((!st.empty())&&((i==n)||(arr[i]<arr[st.top()]))){
            int element=arr[st.top()];st.pop();
            nse=i;
            pse=st.empty()?-1:st.top();
            maxarea=max(maxarea,element*(nse-pse-1));

    }st.push(i);
        }return maxarea;
    }
};
