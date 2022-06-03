#include <bits/stdc++.h>
using namespace std;
string x = "0123456789";
string sub(string a,string b){
    int diff = 0;
    string subt=""; 
    int flag =0;
    if(a[i]=='-'){
        if(b[i]=='-') {
            a.erase(0,1);
            b.erase(0,1);
            swap(a,b);
        }
        else{
            a.erase(0,1);
            subt += '-' + add(a,b);
            return subt;
        }
    }
    else{
        
    }
    if(b.size()>a.size()){
        swap(a,b);
        flag = 1;
    }
    else if(b.size()==a.size()){
        if(b>a) {
            swap(a,b);
            flag = 1;
        }
    }
    int m = a.size(),n = b.size();
    int i = m-1,j=n-1;
    int borrow = 0;
    int temp;
    while(i>=0 && j>=0){
        temp = (a[i]-'0'-borrow);
        if(a[i]-'0'-borrow<b[j]-'0'){
            temp = temp+ 10 ;
            borrow =1;
        }
        diff = temp - (b[j] - '0');
    
    
    
        if((a[i]-'0'-borrow)>b[j]-'0')
            borrow =0;
        if((a[i]-'0'-borrow)==0&&borrow==1)
        borrow =1;
        subt += x[diff];
    
        i--;
        j--;
    }
    while(i>=0){
    
        temp = (a[i]-'0'-borrow);
        if((temp==0||temp==-1)&&borrow==1)
        {
            diff= 9;

        }
        else 
        { borrow = 0;
    
        diff = temp;}
        
    if(a[i]-'0'-borrow==0&&borrow==1)
    {subt +='0';
    borrow =0;
    }
    
        
    else subt +=x[diff];
        i--;
    }
    int k = subt.size()-1;
    while(subt[k]=='0'){
        subt.pop_back();
        k--;
    }
    if(flag==1) subt += '-';
    reverse(subt.begin(),subt.end());
    cout<<subt<<'\t';
    return subt;
}

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
        for(int k = i;k<m-1;k++){
            prod += '0';
        }
        res = add(res,prod);
    }
    return res;
}



int main(){
    if(sub("123","234")!="-111"){
        cout<<"wrong answer!1\n";
    }
    else cout<<"Correct 1 You are genius \n";
    if(sub("234","24")!="210"){
        cout<<"wrong answer!2\n";
    }
    else cout<<"Correct 2 You are genius \n";
    if(sub("5","15")!="-10"){
        cout<<"wrong answer!3\n";
    }
    else cout<<"Correct 3 You are genius \n";
    if(sub("100","1")!="99"){
        cout<<"wrong answer!4\n";
    }
    else cout<<"Correct 4 You are genius \n";
     if(sub("1","100")!="-99"){
        cout<<"wrong answer!5\n";
    }
    else cout<<"C   orrect 5 You are genius \n";
    if(sub("63101","63401")!="-300"){
        cout<<"wrong answer!6\n";
    }
    else cout<<"Correct 6 You are genius \n";
}