#include<bits/stdc++.h>
using namespace std;

void combination(string A,string B){
    if(A.size()==3){
        cout<<A<<endl;
        return;
    }
    else{
        for(int a=0;a<B.size();a++){
            string C=B;
            C.erase(C.begin() + a);
            combination(A+B[a],C);  
        }
    }
}
int main(){
    string A="",B="def";
    combination(A,B);
    return 0;
}