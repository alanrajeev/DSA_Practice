#include <iostream>
#include <string>
using namespace std;

int main() {
	
    string a,b,c;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    c= a+b;
    cout<<c<<endl;
    c[0]=b[0];
    b[0]=a[0];
    a[0]=c[0];
    cout<<a<<" "<<b;
  
    return 0;
}