#include <string>
#include <vector>

using namespace std;

int gcd(int a,int b){
    while(b){
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    answer.push_back(gcd(n,m));
    answer.push_back(n*m/gcd(n,m)); // 최소공배수는 두 수의 곱을 최대공약수로 나눈것!
    return answer;
}
