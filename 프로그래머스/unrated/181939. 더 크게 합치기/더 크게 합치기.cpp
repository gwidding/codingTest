#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    string aa = to_string(a) + to_string(b);
    string bb = to_string(b) + to_string(a);
    string result = (aa>bb) ? aa:bb;
    int answer = stoi(result);
    return answer;
}