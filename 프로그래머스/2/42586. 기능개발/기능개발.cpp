#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    int today = 1;

    for (int i = 0; i < progresses.size(); i++) {
        int need = ceil((100 - progresses[i]) / (float)speeds[i]);

        if (answer.empty() || need > today)
            answer.push_back(1);
        else
            answer.back()++;
        
         if (today < need)
            today = need;
    }
    return answer;
}