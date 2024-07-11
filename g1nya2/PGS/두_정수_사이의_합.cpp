#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if(a<b){
        for(int n=a;n<=b;n++){
        answer+=n;
    }
    }
    else if(a==b){
        answer=a;
    }
    else{
        for(int n=b;n<=a;n++){
            answer+=n;
        }
    }
    
    return answer;
}
