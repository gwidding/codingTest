#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "김서방은 ";
    int i = 0;
    while (true) {
        if (seoul[i] == "Kim") {
            answer += to_string(i);
            answer += "에 있다";
            break;
        }
        i++;
    }
    return answer;
}