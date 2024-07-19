#include <string>
#include <vector>

using namespace std;
int count(int a){
    int cnt=0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            cnt++;
        }
    }
    return cnt;
}

int solution(int left, int right) {
    int answer = 0;
    for(int j=left;j<=right;j++){
        answer+=count(j)%2?j*(-1):j;
    }
    return answer;
}
