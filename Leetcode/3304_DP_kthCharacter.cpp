/**
 * author: Murilo Guizelin
 * date: 2025-07-03
 * hour: 23:07:48
 * Link: https://leetcode.com/problems/find-the-k-th-character-in-string-game-i/?envType=daily-question&envId=2025-07-03
 */

class Solution {
public:
    char kthCharacter(int k) {
        vector<char> palavra;
        palavra.push_back('a');
        while (palavra.size() < k) {
            int tamanhoAtual = palavra.size();
            for (int i = 0; i < tamanhoAtual && palavra.size() < k; i++) {
                char proximo = (palavra[i] == 'z' ? 'a' : palavra[i] + 1);
                palavra.push_back(proximo);
            }
        }

        return palavra[k - 1];
    }
};