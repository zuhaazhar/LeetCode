class Solution {
    stack<char> st;
public:
    bool isValid(string s) {
        for(char ch : s)
            if(ch=='('||ch=='{'||ch=='[')
                st.push(ch);
            else if(ch==')'||ch=='}'||ch==']'){
                if(st.empty())
                    return false;
                char t=st.top();
                st.pop();
                if((ch==')'&&t!='(')||(ch=='}'&&t!='{')||(ch==']'&&t!='['))
                    return false;
            }
            return st.empty();
    }
};