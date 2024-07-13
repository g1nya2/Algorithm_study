#include <string>
#include <vector>
#include <string>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    answer.assign("김서방은 ");
    
    for(int i=0;i<seoul.size();i++){
        if(seoul[i].compare("Kim")==0){
            answer+= to_string(i)+"에 있다";
        }
    }
    
    return answer;
}
