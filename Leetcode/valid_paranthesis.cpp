class Solution {
public:
    bool isValid(string s) {
     
      if (s.size() == 0) return true;
        if(s.size()%2==1) return false;
        
        stack <char> stk;        
         stk.push(s[0]);
        
        for (int i =1; i<s.size(); i++)
        {
            if (s[i]=='(' || s[i] == '{' || s[i] == '[')
                stk.push(s[i]);
            
            else if ((s[i] == ')' && stk.top() == '(') || (s[i] == ']' && stk.top() == '[') || (s[i] == '}' && stk.top() == '{') )
                {  stk.pop();}
            
            else return false;              
        }
        if(!stk.empty()) return false;
        return true;          
    }
};
