/**
 * author: Murilo Guizelin
 * date: 2025-05-21
 * hour: 19:20:50
 * Link: https://leetcode.com/problems/baseball-game/
 */

class Solution {
    public:
        int calPoints(vector<string>& operations) {
            stack<int> pilha;
            int len = operations.size();
            for(auto x : operations){
                string x = operations[i];
                if(x == "+"){
                    int topoAtual = pilha.top();
                    pilha.pop();
                    int topo = topoAtual + pilha.top();
                    pilha.push(topoAtual);
                    pilha.push(topo);
                }
                else if(x == "C") pilha.pop();
                else if(x == "D") pilha.push(pilha.top()*2);
                else pilha.push(stoi(x));
            }
            int sum = 0;
            while(!pilha.empty()){
                sum += pilha.top();
                pilha.pop();
            }
            return sum;
        }
    };