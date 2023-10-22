#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string n_s = to_string(n);
    sort(n_s.begin(), n_s.end(), greater<>());
    answer = stoll(n_s);
    return answer;
}