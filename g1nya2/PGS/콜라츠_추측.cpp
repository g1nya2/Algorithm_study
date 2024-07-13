#include <string>
#include <vector>

using namespace std;

int solution(int num) { 
    long lnum =num;// int로 하니 오버플로우가 나 case3) 626331 값이 안나옴.
    int answer = 0;
    
    while(true){
        if(lnum==1){
            break;
        }
        if(answer>=500){
            return -1;
        }
        lnum%2? lnum=lnum*3+1 : lnum/=2;
        answer++;
    }
    return answer;
}
