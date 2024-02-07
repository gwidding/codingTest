#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    
    for (int i = 1; i <= n/2; i++) {
        int sum = 0;
        
        while (sum < n) {
            
            for (int j = i; j <= n/2 + 1 && sum < n; j++) {
                sum += j;
            }
            
            if (sum == n) {
                answer++;
                break;
            }
        }
    }
    return answer;
}