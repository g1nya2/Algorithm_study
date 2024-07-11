#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(string s) {
    int answer = 0;
    int m=1;
    
    for(int i=0;i<s.length();i++){
        if(s[0]=='-'){
            m=-1;
            if(i>=1){
               answer+=(s[i]-'0')*pow(10,s.length()-i-1); 
            }
            
        }
        else if(s[0]=='+'){
            if(i>=1){
               answer+=(s[i]-'0')*pow(10,s.length()-i-1); 
            }
            
        }
        else {
            answer+=(s[i]-'0')*pow(10,s.length()-i-1);
        }
        
    }
    answer*=m;
    
    return answer;
}
