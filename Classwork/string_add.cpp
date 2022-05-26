#include <bits/stdc++.h>
using namespace std;

string add(string a,string b){
    string sum = "";
    int m = a.size(),n = b.size();
    int i = m-1,j=n-1;
    int carry = 0;
    if(a=="") return b;
    while(i>=0 && j>=0){
        sum += to_string(((carry) + (a[i] - '0')+(b[j] - '0'))%10);
        if(((carry) + (a[i] - '0')+(b[j] - '0'))>9){
            carry = ((carry) + (a[i] - '0')+(b[j] - '0'))/10;
        } 
        else carry = 0;
        i--;
        j--;
    }
    while(i>=0){
        sum += to_string(((carry) + (a[i] - '0'))%10);
        if(((carry) + (a[i] - '0'))>9){
            carry = ((carry) + (a[i] - '0'))/10;
        } 
        else carry = 0;
        i--;
    }
    while(j>=0){
        sum += to_string(((carry) + (b[j] - '0'))%10);
        if(((carry) + (b[j] - '0'))>9){
            carry = ((carry) +(b[j] - '0'))/10;
        } 
        else carry = 0;
        j--;
    }
    if(carry !=0) sum += (carry+'0');
    reverse(sum.begin(),sum.end());
    return sum;
}

string mul(string a,string b){
    string prod;
    string res  = "";
    int m = a.size(),n = b.size();
    int i = m-1,j=n-1;
    int carry;
    for(;i>=0;i--){
        carry = 0;
        prod = "";
        j = n-1;
        for(;j>=0;j--){
            prod += to_string(((carry) + (a[i] - '0')*(b[j] - '0'))%10);
        if(((carry) + (a[i] - '0')*(b[j] - '0'))>9){
            carry = ((carry) + (a[i] - '0')*(b[j] - '0'))/10;
        } 
        else carry = 0;
        }
        if(carry !=0) prod += (carry+'0');
        reverse(prod.begin(),prod.end());
        for(int k = i;k<n-1;k++){
            prod += '0';
        }
        for(int k = 0;k<prod.size();k++) cout<<prod[k];
        cout<<endl;
        res = add(res,prod);
        for(int k = 0;k<res.size();k++) cout<<res[k];
        cout<<endl;
    }
    return res;
}



int main(){
    if(add("123","234")!="357"){
        cout<<"wrong answer!1\n";
    }
    else cout<<"Correct 1 You are genius \n";
    if(add("123","937")!="1060"){
        cout<<"wrong answer!2\n";
    }
    else cout<<"Correct 2 You are genius \n";
    if(mul("321","255")!="81855"){
        cout<<"wrong answer!3\n";
    }
    else cout<<"Correct 3 You are genius \n";
}