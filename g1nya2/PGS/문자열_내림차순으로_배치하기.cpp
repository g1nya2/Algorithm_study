#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    char tmp;
    
    for(int i=0;i<s.length();i++){
        for(int j=i;j<s.length();j++){
            if(static_cast<int>(s[i])<static_cast<int>(s[j])){
                tmp=s[i];
                s[i]=s[j];
                s[j]=tmp;
            }
        }
        
    }
    
    return s;
}
