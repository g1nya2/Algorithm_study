#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    for(int i=0;i<phone_number.length()-4;i++){
        answer+="*";
    }
    for(int j=phone_number.length()-4;j<phone_number.length();j++){
        answer+=phone_number[j];
    }
    return answer;
}
