#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    if(pow(static_cast<int>(sqrt(n)),2)==n){ // sqrt정수화한 것을 제곱한것과 n이 같으면 n은 정수의 제곱.
        answer = pow(sqrt(n)+1,2);
    }
    else{
        answer=-1;
    }
    return answer;
}
