/**
 * author: Murilo Guizelin
 * date: 2025-03-06
 * hour: 19:43:18
 * Link: https://codeforces.com/problemset/problem/263/A
 */


#include <bits/stdc++.h>

using namespace std;

int main() {
  int matrix[5][5];
  int linha, coluna, res = 0;
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin >> matrix[i][j];
        if(matrix[i][j] == 1){
            linha = i;
            coluna = j;
        }
        if(matrix[2][2] == 1){
          cout << res << "\n";
          return 0;
      }
    }
  }
  res = abs(linha - 2) + abs(coluna - 2);
  cout << res << "\n";
  
}
