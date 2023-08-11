#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for (const vector<int>& query : queries) {
        int s = query[0];
        int e = query[1];
        int k = query[2];

        int minElement = -1;

        for (int i = s; i <= e; i++) {
            if (arr[i] > k) {
                if (minElement == -1 || arr[i] < minElement) {
                    minElement = arr[i];
                }
            }
        }
        answer.push_back(minElement);
    }
    return answer;
}