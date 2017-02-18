// Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.

class Solution {
public:
    bool isValid(string s) {
        stack<char> paren;
        for(int i = 0; i < s.length(); i++){
            switch (s[i]){
                case '(': paren.push('('); break;
                case '[': paren.push('['); break;
                case '{': paren.push('{'); break;
                case ')': 
                    if(paren.empty() || paren.top() != '(') return false;
                    paren.pop(); break;
                case ']':
                    if(paren.empty() || paren.top() != '[') return false;
                    paren.pop(); break;
                case '}':
                    if(paren.empty() || paren.top() != '{') return false;
                    paren.pop(); break;
                default: break;
            }
        }
        return paren.empty() ;
    }
};