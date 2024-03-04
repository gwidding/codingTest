#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int k, vector<int> tangerine) {
    if (k == 1)
        return 1;
    
    int answer = 0;
    vector<int> cntVec;
    sort(tangerine.begin(), tangerine.end());
    
    for (int i = 0; i < tangerine.size(); i++) {
        int cnt = 1;
        while (tangerine[i] == tangerine[i+1]) {
            cnt++;
            i++;
        }
        cntVec.push_back(cnt);
    }
    sort(cntVec.rbegin(), cntVec.rend());    
    
    while (k > 0) {
        k -= cntVec[answer];
        answer++;
    }
    for (auto& t : cntVec) {
        cout << t << " ";
    }
    
    return answer;
}