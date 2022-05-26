#pragma endregioninclude <bits/stdc++.h>
using namespace std;

string x = "0123456789";
string add(string a,string b){
    string sum = "";
    int m = a.size(),n = b.size();
    int i = m-1,j=n-1;
    char carry = '0';
    while(i>=0 || j>=0){
        sum += to_string(((carry - '0') + (a[i] - '0')+(b[i] - '0'))%10);
        if(((carry - '0') + (a[i] - '0')+(b[j] - '0'))>9){
            carry = '1';
        } 
        else carry = '0';
        i--;
        j--;
    }
    
    
    while(i>=0){
        sum += to_string(a[i] - '0');
        i--;
    }
    while(j>=0){
        sum += to_string(b[j] - '0');
        j--;
    }
    reverse(sum.begin(),sum.end());
    return sum;
}

int main(){
    if(add("123","234")!="357"){
        cout<<"wrong answer!1\n";
    }
    else cout<<"Correct 1 You are genius \n";
    if(add("1123","238")!="1361"){
        cout<<"wrong answer!2\n";
    }
    else cout<<"Correct 2 You are genius \n";
}