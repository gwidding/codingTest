#include <string>
#include <iostream>
using namespace std;

bool solution(string s) {
    int p_cnt = 0;
    int y_cnt = 0;
    bool answer = true;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'p' || s[i] == 'P') p_cnt++;
        if (s[i] == 'y' || s[i] == 'Y') y_cnt++;
    }
    cout << s.length() << ',' << p_cnt << ',' << y_cnt;
    if (p_cnt != y_cnt) answer = false; 

    return answer;
}