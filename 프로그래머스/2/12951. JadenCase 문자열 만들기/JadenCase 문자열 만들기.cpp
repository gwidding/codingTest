#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    bool start = true;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ')
            start = true;
        else if (isdigit(s[i]))
            start = false;
        if (start && s[i] != ' ') {
            answer += toupper(s[i]);
            start = false;
        } else {
            answer += tolower(s[i]);
        }
        
    }
    
    return answer;
}