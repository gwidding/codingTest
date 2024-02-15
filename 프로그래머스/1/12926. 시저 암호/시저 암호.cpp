#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for (int i = 0; i < s.size(); i++) {
        int tmp = (s[i]==' ') ? ' ' : s[i] + n;
        if (s[i] == ' '){
            tmp = ' ';
        }
        else if (s[i] + n)
        if ((s[i] < 91 && tmp > 90) || tmp > 122) {
            tmp -= 26;
        }
        answer+=tmp;
    }
    return answer;
}