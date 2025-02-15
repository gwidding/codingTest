#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

int solution(string word) {
    int len = word.length();
    int answer = len;
    
    char direc[5] = {'A', 'E', 'I', 'O', 'U'};

    for (int i = 0; i < len; i++) {
        cout << "i = " << i << " ";
        for (int j = 0; j < 5; j++) {
            if (word[i] != direc[j]) {
                answer += (pow(5, 5-i) - 1) / (5 - 1);
                cout << answer << " " ;
            }
            else {                
                cout << endl;
                break;
            }            
        }
    }    
    
    return answer;
}