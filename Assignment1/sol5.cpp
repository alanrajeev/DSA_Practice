#include <bits/stdc++.h>

using namespace std;
int simpleArraySum(int ar[],int n) {
    int s=0;
    for (int i = 0;i<n;i++){
        s = s + ar[i];
    }
    return s;
}

int main()
{
    int n,a[1000],sum;
    cin>>n;
    for (int i = 0;i < n;i++){
        cin>>a[i];
    }
    sum = simpleArraySum(a,n);
    cout<<sum;
    return 0;
}
