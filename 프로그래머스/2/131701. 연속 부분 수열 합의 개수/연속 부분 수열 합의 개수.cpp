#include <string>
#include <vector>
#include <set>
#include <iostream>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    set<int> s;
    
    for (int cnt = 1; cnt <= elements.size(); cnt++) {
        for (int idx = 0; idx < elements.size(); idx++) {
            int j = 0; int mvIdx = idx; int sum = 0;

            while (j < cnt) {
                sum += elements[mvIdx];
                j++; mvIdx++;
                mvIdx %= elements.size();                
            }
            s.insert(sum);
        }
    }
    answer = s.size();
    return answer;
}