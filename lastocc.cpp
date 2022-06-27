#include<iostream>
using namespace std;
int lastocc(int A[],int i,int n,int target){
    if(i>n) return -1; 
    int rest = lastocc(A,i+1,n,target);
    if(rest != -1){
        return rest;
    }
    if(A[i]==target)
    {
        return i;
    }
    return -1;
}
int main()
{
    int a[]={1,2,3,2,4,2,7};
    int ans=lastocc(a,0,7,2);
    cout<<ans<<endl;
    return 0;
}