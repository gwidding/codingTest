#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    set<int> s (nums.begin(), nums.end());        
    return (s.size() >= nums.size() / 2) ? nums.size() / 2 : s.size();
}