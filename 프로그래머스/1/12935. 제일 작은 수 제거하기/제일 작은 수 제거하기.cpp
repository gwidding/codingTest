#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer = arr;
    if (arr.size() == 1) return {-1};
    int min_idx =0;
    for (int i = 0; i < arr.size(); i++) {
        min_idx = (arr[min_idx] > arr[i]) ? i : min_idx;
    }
    answer.erase(answer.begin() + min_idx);
    return answer;
}