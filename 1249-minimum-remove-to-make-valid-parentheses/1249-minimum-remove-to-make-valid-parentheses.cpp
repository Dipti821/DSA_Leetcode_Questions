class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        int sz=s.length();
        for(int i=0;i<sz;i++){
           if(s[i] == '(')
               st.push(i);
           else if(s[i] == ')'){
            if(!st.empty())st.pop();
            else s[i] = '*';
         }
      }
      while(!st.empty()){
         s[st.top()] = '*';
         st.pop();
      }
      string ans = "";
      for(int i = 0; i < s.size(); i++){
        if(s[i] != '*')ans += s[i];
        }
        return ans;
    }
};