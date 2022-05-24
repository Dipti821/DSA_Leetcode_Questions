class Solution {
public:
    int longestValidParentheses(string s) {
      int sz=s.size();
        stack<int>st;
        int ans=0,c=0;
        st.push(-1);
        
        for(int i=0;i<sz;i++){
           if(s[i]=='('){
               st.push(i);
           }
            else{
                st.pop();
                if(st.empty())
                    st.push(i);
                else
                    ans=max(ans,i-st.top());
            }
        }
        return ans;
    }
};