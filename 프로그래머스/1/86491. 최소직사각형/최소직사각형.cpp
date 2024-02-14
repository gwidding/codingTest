#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int w = 1, h = 1;
    for (int i = 0; i < sizes.size(); i++) {
        if (sizes[i][0] < sizes[i][1]) {
            int tmp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = tmp;
        }
        if (sizes[i][0] > w)
            w = sizes[i][0];
        if (sizes[i][1] > h)
            h = sizes[i][1];
    }
    answer = w * h;
    return answer;
}