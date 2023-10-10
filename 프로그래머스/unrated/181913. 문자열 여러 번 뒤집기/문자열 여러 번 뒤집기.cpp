#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = my_string;
    
    for (int j = 0; j < queries.size(); j++) {
        int start = queries[j][0];
        int end = queries[j][1];
        int interval = end - start;
        
        for (int i = 0; i <= interval/2; i++) {
            char tmp = answer[start + i];
            answer[start + i] = answer[end - i];
            answer[end - i] = tmp;
        }
    }
    return answer;
}