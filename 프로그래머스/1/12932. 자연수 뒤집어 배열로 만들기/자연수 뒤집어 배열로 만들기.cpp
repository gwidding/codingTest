#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    int j = 10;
    while (n) {
        answer.push_back(n % j);
        n /= 10;
    }
    return answer;
}