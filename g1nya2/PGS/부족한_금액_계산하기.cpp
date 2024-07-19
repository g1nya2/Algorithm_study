using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long sum =0;
  
    for(long long i=1;i<=count;i++){
        sum+=price*i;
    }
  
    answer=sum>money?sum-money:0;
    return answer;
}
