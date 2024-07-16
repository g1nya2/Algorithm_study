#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for(int i=0;i<arr.size();i++){
        if(arr[i] % divisor==0){
            answer.push_back(arr[i]);
        }
    }
    
    if(answer.empty()){ //비어있으면 -1
        answer.push_back(-1);
    }
    
    else{
        for(int i=0;i<answer.size();i++){ //정렬
        for(int j=i;j<answer.size();j++){
            if(answer[i]>answer[j]){
                int tmp=answer[i];
                answer[i]=answer[j];
                answer[j]=tmp;
            }
        }
    }
    
    }
    
    return answer;
    
}
