#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    string s;
    cin >> s;

    int count = 0;
    int currentLength = 1;

    for (int i = 1; i < N; ++i) {
        if (s[i] == s[i - 1]) {
            currentLength++;
        } else {
            if (currentLength > 1 && s[i - 1] == 'a') {
                count += currentLength;
            }
            currentLength = 1;
        }
    }

    if (currentLength > 1 && s[N - 1] == 'a') {
        count += currentLength;
    }

    cout << count << endl;
    return 0;
}