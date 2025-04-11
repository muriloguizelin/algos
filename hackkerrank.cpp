#include <bits/stdc++.h>

using namespace std;

long getMinCost(vector<int> crew_id, vector<int> job_id) {
    sort(crew_id.begin(), crew_id.end());
    sort(job_id.begin(), job_id.end());
    long long sum = 0;
    for(int i=0;i<job_id.size();i++){
        sum += abs(crew_id[i]-job_id[i]);
    }
    return sum;
}

vector<string> possibleChanges(vector<string> usernames) {
    int quantidade = static_cast<int>(usernames.size());
    for(int i=0;i<quantidade;i++){
        string s = usernames[i];
        string res = "NO";
        sort(s.begin(), s.end());
        if(s != usernames[i]){
            res = "YES";
        }
        usernames[i] = res;
    }
    return usernames;
}