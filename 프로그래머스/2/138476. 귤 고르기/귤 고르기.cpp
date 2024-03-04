#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <map>

using namespace std;
int solution(int k, vector<int> tangerine) {
    
    int answer = 0;
    map<int, int> cntMap;
    
    for (auto& i : tangerine) {
        cntMap[i]++;    
    }
    vector<int> cntVec;
    for (auto& c : cntMap) {
        cntVec.push_back(c.second);
    }
    sort(cntVec.rbegin(), cntVec.rend());
    for (int i = 0; i < cntVec.size() && k > 0; i++) {
        k -= cntVec[i];
        answer++;
    }

    return answer;
}

// int solution(int k, vector<int> tangerine) {
//     if (k == 1)
//         return 1;
    
//     int answer = 0;
//     vector<int> cntVec;
//     sort(tangerine.begin(), tangerine.end());
    
//     for (int i = 0; i < tangerine.size(); i++) {
//         int cnt = 1;
//         cout << tangerine[i+1] << " ";
//         while (tangerine[i] == tangerine[i+1]) {
//             cnt++;
//             i++;
//         }
//         cntVec.push_back(cnt);
//     }
//     sort(cntVec.rbegin(), cntVec.rend());    
    
//     while (k > 0) {
//         k -= cntVec[answer];
//         answer++;
//     }
    
//     return answer;
// }