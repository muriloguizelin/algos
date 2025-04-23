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