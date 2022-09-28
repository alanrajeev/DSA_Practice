#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "My name is Alan.Alan is hardworking guy",d = "";
    string sub = "Alan";
    int n = s.length();
    for(int i = 0;i<n;i++){
        if(s[i]!= " "){
            d += s[i];
        }
        else{
            if(d==sub) {
                cout<<true;
                break;
            }
            d = "";
        }
    }
    cout<<false;
    return 0;
}