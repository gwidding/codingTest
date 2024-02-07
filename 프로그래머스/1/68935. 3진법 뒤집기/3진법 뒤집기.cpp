#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> arr;
    
    while (n > 0) {
        arr.push_back(n%3);
        n /= 3;
    }

    int pos = arr.size() - 1;
    for (int k = pos; k >= 0; k--) {
        answer += arr[k] * pow(3, pos - k);
    }

    return answer;
}