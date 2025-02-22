class Solution {
public:
    bool isValid(string s) {
        if(s.length()==1)
            return false;

        stack<char> st;
        
        for(auto it :s){
            if(it=='(' || it=='{'||it=='[')
                st.push(it);
            else{
                if(st.empty())
                    return false;
                if((it==')' && st.top()!='(')||(it=='}' && st.top()!='{' )||(it==']' && st.top()!='['))
                    return false;
                st.pop();
            }
        }
        return st.empty();
    }
};