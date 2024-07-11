#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    for(auto c:arr){
        answer+=c;
    }
    answer/=arr.size();
    return answer;
}
