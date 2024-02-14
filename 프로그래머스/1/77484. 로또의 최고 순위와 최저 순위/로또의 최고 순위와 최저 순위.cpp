#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    sort(lottos.begin(), lottos.end());
    sort(win_nums.begin(), win_nums.end());
    
    int high = 7, min = 7;
    
    int j = 0;
    for (int i = 0; i < 6; i++) {
        if (lottos[i] == 0) {
            high--;
        }
        else {
            for (int k = j; k < 6; k++) {
                if (lottos[i] == win_nums[k]) {
                    high--, min--, j++;
                }
            }
        }
    }
    if (min == 7)
        min = 6;
    if (high == 7)
        high = 6;

    answer.push_back(high);
    answer.push_back(min);
    return answer;
}