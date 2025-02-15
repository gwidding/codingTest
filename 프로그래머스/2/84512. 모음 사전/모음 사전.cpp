#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(string word) {
    int len = word.length();
    int answer = len;
    
    char direc[5] = {'A', 'E', 'I', 'O', 'U'};

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < 5; j++) {
            if (word[i] != direc[j]) {
                answer += (pow(5, 5-i) - 1) / (5 - 1);
            }
            else
                break;         
        }
    }    
    
    return answer;
}