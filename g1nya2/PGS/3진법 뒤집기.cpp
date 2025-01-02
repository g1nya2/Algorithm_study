#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int j=1;
    vector <int> v;
    while(n>0){
        v.push_back(n%3);
        n/=3;
    } // 거꾸로된3진법 그대로 저장
    
    for(int i=v.size()-1;i>=0;i--){ //1의자리부터 조회하며 10진법으로 변경
        answer+=v[i]*(j);
        j=j*3;
    }
    return answer;
}
