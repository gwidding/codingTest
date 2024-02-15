#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> fibonacci = {0, 1};
    for (int i = 2; i <= n; i++) {
        int tmp = fibonacci[0] + fibonacci[1];
        fibonacci[0] = fibonacci[1] % 1234567;
        fibonacci[1] = tmp % 1234567;
    }
    answer = fibonacci[1];
    return answer;
}