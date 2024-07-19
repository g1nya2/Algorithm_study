#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    if(s.length()==4||s.length()==6){
        for(auto c:s){
            if(c>='A'&&c<='z'){ // 풀고나서 보니, isdigit()이라는 함수가 있더라.
                answer= false;
            }
        }
    }
    else{
        answer=false;
    }
    
    return answer;
}
