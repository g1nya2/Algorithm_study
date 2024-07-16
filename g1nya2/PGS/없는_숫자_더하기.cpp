#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    
    for(int i=0;i<numbers.size();i++){
        answer+=numbers[i]; //숫자 다 합하고
    }
    
    answer=45-answer; //전체에서 뺌.
    return answer;
}
