#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:-";
    cin>>n;

    while(n>0)
    {
        
        for(int i=0;i<n;i++)
        cout<<"#";
        cout<<endl;
        n /=2;
    }
    return 0;
}