#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    string upperchar = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            upperchar += s[i];
        }
        else answer += s[i];
    }
    sort(answer.begin(), answer.end());
    sort(upperchar.begin(), upperchar.end());
    reverse(answer.begin(), answer.end());
    reverse(upperchar.begin(), upperchar.end());
    answer += upperchar;    
    return answer;
}