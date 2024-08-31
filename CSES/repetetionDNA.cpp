#include <iostream>

using namespace std;

int main() {
    string dna;
    cin >> dna;
    
    while(dna.size() > 0) {
        char current = dna[0];
        int count = 1;
        
        for (int i = 1; i < dna.size(); ++i) {
            if (dna[i] == current) {
                ++count;
            } else {
                cout << current << count;
                current = dna[i];
                count = 1;
            }
        }
        
        cout << current << count << endl;
        
        cin >> dna;
    }
}