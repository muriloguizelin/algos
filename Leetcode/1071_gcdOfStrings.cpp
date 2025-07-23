/**
 * author: Murilo Guizelin
 * date: 2025-06-23
 * hour: 11:32:15
 * Link: https://leetcode.com/problems/greatest-common-divisor-of-strings/description/
 */

/*
Solução elegante, se as somas das strings forem iguais, ex: ABAB, AB.
ABABAB = ABABAB, ai pega o maior divisor comum do tamanho das strings
e retorna a substring de zero ate o gcd
*/ 
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        return (str1+str2==str2+str1)?str1.substr(0, gcd(size(str1),size(str2))): "";
    }
};