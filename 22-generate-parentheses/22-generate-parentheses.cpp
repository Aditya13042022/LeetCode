class Solution {
public:
void solve(vector<string> &ans, string output, int open, int closed){
    if( open == 0 && closed ==0 ){ 
        ans.push_back(output); 
        return;
    }
    
    if( open != 0 ){ 
        string op1 = output;  
        op1.push_back('(');
        solve(ans,op1,open-1,closed); 
        
    }
    
    if( open < closed){  
        string op2 = output;   
        op2.push_back(')');
        solve(ans,op2,open,closed-1); 
    }
    
    return;
    
}

vector<string> generateParenthesis(int n) {
    vector<string> ans;
    string output = "";
    
    int open = n;
    int closed = n;
    
    solve(ans,output,open,closed);
    
    return ans;
}
};