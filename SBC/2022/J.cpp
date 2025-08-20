#include <bits/stdc++.h>

using namespace std;


unordered_map<int, int> contador;

int maior(int n){
    if(n > 10) n = 10;
    contador[n]++;
    return n;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n, joao0, joao1, maria0, maria1; cin >> n >> joao0 >> joao1 >> maria0 >> maria1;
    int somaJoao, somaMaria;
    somaJoao = maior(joao0) + maior(joao1);
    somaMaria = maior(maria0) + maior(maria1);
    while(n--){
        int x; cin >> x;
        somaJoao += maior(x);
        somaMaria += maior(x);
        cout << "SOMA MARIA" << somaMaria << '\n';
    }
    if(somaMaria >= 23){
        cout << -1;
        return 0;
    }
    if((somaJoao <= somaMaria) && somaMaria < 23){
        int x = 23 - somaMaria;
        while(contador[x] > 4) x--;
        cout << x;
    }
    else{
        int x = 24 - somaJoao;
        while(contador[x] > 4) x++;
        cout << x;
    }
      
    return 0;
}