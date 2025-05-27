/**
 * author: Murilo Guizelin
 * date: 2025-05-16
 * hour: 12:08:10
 * Link: https://leetcode.com/problems/valid-parentheses/
 */



class Solution {
    public:
        bool isValid(string s) {
            unordered_map<char, char> hashMap = {{')', '('}, {'}', '{'}, {']', '['}};
            stack<char> pilha;
            for(char c : s){
                if(!hashMap.contains(c)) pilha.push(c);
                else{
                    if(pilha.empty() || pilha.top() != hashMap[c]) return false;
                    pilha.pop();
                }
            }
            return pilha.empty();
        }
    };

class Solution {
public:
    bool isValid(string s) {
        stack<char>str;
        if(s[0]==')'||s[0]=='}'||s[0]==']')return false;
            for(int i=0;i<s.size();i++){
                if(s[i]=='('|| s[i]=='{'||s[i]=='[')str.push(s[i]);
                else{
                if(str.empty())return false;
                if(s[i]=='}' && str.top()!='{')return false;
                else if(s[i]==']' && str.top()!='[')return false;
                else if(s[i]==')' && str.top()!='(')return false;
                else str.pop();
            }
        }
        if(str.empty()==true)return true;
        return false;
    }
};