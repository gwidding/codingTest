#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int area = brown + yellow;
    
    for (int i = brown / 2; i > 1 ; i--) {
        int k = (area % i == 0) ? area/i : 0;

        if (i*k - brown == yellow && 2*(i+k-2) == brown) {
            answer.push_back(i);
            answer.push_back(k);
            break;
        }
    }
    return answer;
}