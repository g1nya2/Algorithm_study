#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int cnt=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            cnt=0;
            answer+=' ';
            continue;
        }
        answer+=cnt%2?tolower(s[i]):toupper(s[i]);
        cnt++;
    }
    return answer;
}
