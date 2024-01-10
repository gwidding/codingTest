#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int j = 0;
    string answer = "";
    
    for (int i = 0; i < s.size(); i++) {
        if (isspace(s[i]) != 0) {
            j = 0;
            answer += " ";
            continue;
        }
        if (j % 2 == 0) {
            answer += toupper(s[i]);
        }
        else {
            answer += tolower(s[i]);
        }
        j++;
    }
    return answer;
}