#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector <long long> tmp ;
  
    while(n){ //배열에 추가
        tmp.push_back(n%10);
        n/=10;
    }
    
    for(long long i =0; i<tmp.size();i++){ //sort
        for(long long j =i; j<tmp.size();j++){
            if(tmp[i]>tmp[j]){
                long long t = tmp[i];
                tmp[i]=tmp[j];
                tmp[j]=t;
            }
        }
    }
    
    for(long long k =0; k<tmp.size();k++){ //자릿수에 맞춰 합체
        answer+=tmp[k]*pow(10,k);
    }
  
    return answer;
}
