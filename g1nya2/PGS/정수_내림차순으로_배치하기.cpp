#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector <long long> tmp ;
  
    while(n){
        tmp.push_back(n%10);
        n/=10;
    }
    
    for(long long i =0; i<tmp.size();i++){ //sort 시킴
        for(long long j =i; j<tmp.size();j++){
            if(tmp[i]>tmp[j]){
                long long t = tmp[i];
                tmp[i]=tmp[j];
                tmp[j]=t;
            }
        }
    }
    
    for(long long k =0; k<tmp.size();k++){
        answer+=tmp[k]*pow(10,k);
    }
  
    return answer;
}
