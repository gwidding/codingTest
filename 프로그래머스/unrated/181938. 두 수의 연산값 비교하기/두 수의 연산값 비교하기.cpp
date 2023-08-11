#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string aa =to_string(a)+to_string(b);
    string cc = to_string(2*a*b);
    answer = max(stoi(aa),stoi(cc));
    return answer;
}