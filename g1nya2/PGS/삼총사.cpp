#include <string>
#include <vector>

using namespace std;
int real_samchongsa(int i,int j, int k){
    int count =0;
    if((i+j+k)==0){
        count++;
    }
    return count;
}

int solution(vector<int> number) {
    int answer = 0;
    for (int i=0;i<number.size();i++){
        for(int j=i+1;j<number.size();j++){
            for(int k=j+1;k<number.size();k++){
                answer+=real_samchongsa(number[i],number[j],number[k]);
            }
        }
    }
    return answer;
}
