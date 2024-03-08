#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    map<string, int> p;
    
    for (int i = 0; i < participant.size(); i++) {
            p[participant[i]]++;
    }
    for (int i = 0; i < completion.size(); i++) {
        string name = completion[i];
        if (p[name] > 1)
            p[name]--;
        else
            p.erase(name);
    }
    
    answer = p.begin() -> first;
    return answer;
}