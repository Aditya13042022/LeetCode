class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,int> mp{{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};
        stack<char> st;
        
        for(auto &i : s)
        {
            if(mp[i]<0)
            {
                st.push(i);
            }
            else
            {
                if(st.empty()) return false;
                char x = st.top();
                st.pop();
                if(mp[i]+mp[x]!=0) return false;
            }
        }
        if(st.empty()) return true;
        return false;
                                   
        
    }
};