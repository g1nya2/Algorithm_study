#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int half_idx=s.length()/2;
    
    if(s.length()%2==0){ //짝수
        answer+=s[half_idx-1];
        answer+=s[half_idx];
    }
    
    else{//홀수
        answer+=s[half_idx];
    }
    
    return answer;
}
