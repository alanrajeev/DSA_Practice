#include <bits/stdc++.h>

using namespace std;
long bigArraySum(long ar[],int n) {
    long s=0;
    for (int i = 0;i<n;i++){
        s = s + ar[i];
    }
    return s;
}

int main()
{
    int n;
    long a[1000],sum;
    cin>>n;
    for (int i = 0;i < n;i++){
        cin>>a[i];
    }
    sum = bigArraySum(a,n);
    cout<<sum;
    return 0;
}
