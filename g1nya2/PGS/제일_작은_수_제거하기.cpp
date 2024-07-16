#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min=arr[0];
    
    if(arr.size()==1){
        answer.push_back(-1);
        return answer;
    }
    
    for(auto c:arr){ //최솟값추출 >> 이 방법말고 <algorithm> 헤더에 min_element(arr.begin(), arr.end()) 있음. 참고.
        if(min>c){
            min=c;
        }
    }
    
    for(auto b:arr){
        if(min!=b){
            answer.push_back(b);
        }
    }
    
    return answer;
}
