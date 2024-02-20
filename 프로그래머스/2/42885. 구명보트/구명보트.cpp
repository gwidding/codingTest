#include <string>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    
    sort(people.begin(), people.end());
    deque<int> incre(people.begin(), people.end());
    
    while (!incre.empty()) {            
        if (incre.front() + incre.back() <= limit && incre.size() > 1) {
            incre.pop_back();
            incre.pop_front();
            answer++;
        }
        else {
            incre.pop_back();
            answer++;
        }
    }
    return answer;
}