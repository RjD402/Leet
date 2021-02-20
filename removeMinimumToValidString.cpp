class Solution {
public:
    //https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        int len = s.length();
        for(int i=0;i<len;i++){
            if(s[i]=='('){
                st.push(i);
            }
            if(s[i]==')'){
                if(!st.empty()) st.pop();
                else s[i] = '*';
            }
        }
        while(!st.empty()){
            s[st.top()] = '*';
            st.pop();
        }
        s.erase(remove(s.begin(), s.end(),'*'),s.end());
        return s;
    }
};