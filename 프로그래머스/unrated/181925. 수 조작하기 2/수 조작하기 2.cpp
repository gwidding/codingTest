#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    int n = numLog.size();
    for (int i = 0; i < n-1; i++){
        if (numLog[i] - numLog[i+1] == -1) answer += 'w';
        else if (numLog[i] - numLog[i+1] == 1) answer += 's';
        else if (numLog[i] - numLog[i+1] == -10) answer += 'd';
        else answer +='a';
    }
    return answer;
}