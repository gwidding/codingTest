#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> days;
    
    for (int i = 0; i < progresses.size(); i++) {        
        days.push(ceil((100 - progresses[i]) / (float) speeds[i]));
    }
    
    int today = 1;
    while (!days.empty()) {
        int cnt = 0;

        if (days.front() > 0)
            today = days.front();
        
        while (!days.empty() && days.front() <= today) {
            cnt++;
            days.pop();
        }
        
        if (cnt > 0) 
            answer.push_back(cnt);
    }
    
    return answer;
}