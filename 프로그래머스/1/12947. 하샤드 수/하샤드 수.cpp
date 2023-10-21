#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = false;
    int y = x;
    int sum = 0;
    while (y != 0 ) {
        sum += y % 10;
        y /= 10;
    }
    if (x % sum == 0) answer = true;    
    
    return answer;
}