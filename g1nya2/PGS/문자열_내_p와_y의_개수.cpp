#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pcnt=0;
    int ycnt=0;
    
    for(char c:s){
        if(c=='p'||c=='P'){
            pcnt++;
        }
        else if(c=='y'||c=='Y'){
            ycnt++;
        }
    }

    return ycnt==pcnt;
}
