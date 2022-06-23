#include<bits/stdc++.h>
using namespace std;

void combination(string A,string B){
    if(A.size()!=0) cout<<A<<endl;
    if(A.size()>=3){
        return;
    }
    else{
        for(int a=0;a<B.size();a++){
            combination(A+B[a],B);
            
        }
    }
}
int main(){
    string A="",B="def";
    combination(A,B);
    return 0;
}