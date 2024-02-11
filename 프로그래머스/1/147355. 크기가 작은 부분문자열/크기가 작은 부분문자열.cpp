#include <string>
#include <vector>
using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int len = p.size();
    
    for (int i = 0; i <= t.size() - len; i++) {
        long num = stol(t.substr(i, len));
        if (num <= stol(p))
            answer++;
    }
    
    return answer;
}