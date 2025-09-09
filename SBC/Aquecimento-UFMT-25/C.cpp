#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, j;
    int x, y;
    while(cin >> i >> j){
      x = i, y = j;
      if (i > j) swap(i, j);
          int maior = 0;
          for (int b = i; b <= j; b++){
              int ans = 1;
              for (int c = b; c != 1; ans++){
                  c = (c & 1 ? c * 3 + 1 : c/2);
              }
              maior = max(ans, maior);
          }
          cout << x << " " << y << " " << maior << '\n';
    }

    return 0;
}
