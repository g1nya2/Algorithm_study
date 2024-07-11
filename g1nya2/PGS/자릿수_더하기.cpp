#include <iostream>

using namespace std;

int answer = 0; // 근데 이렇게 막 밖에 호출하면 안될 것 같긴한데, 메인을 작성하게 되면 그 안에 쓰게 되겠죠..?

int solution(int n)
{
    answer+=n%10;
    if(n!=0){
        solution(n/10);
    }
    return answer;
}
