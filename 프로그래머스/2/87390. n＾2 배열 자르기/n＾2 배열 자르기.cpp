#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    
    for (long long i = left; i <= right; i++) {
        long long r = i / n;
        if (i >= r * n && i < r * (n+1))
            answer. push_back(r + 1);
        else
            answer.push_back(i + 1 - r*n);
    }
    return answer;
}