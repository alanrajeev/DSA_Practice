#include <bits/stdc++.h>

using namespace std;
void plusMinus(int ar[],int n) {
   int p = 0,m = 0,z = 0;
   for (int i =0;i<n;i++){
       if(ar[i]==0) z++;
       else if(ar[i]<0) m++;
       else p++;
   } 
   cout<<fixed<<setprecision(6)<<(float)p/n<<endl;
   cout<<fixed<<setprecision(6)<<(float)m/n<<endl;
   cout<<fixed<<setprecision(6)<<(float)z/n<<endl;
}

int main()
{
    int n,a[1000];
    cin>>n;
    for (int i = 0;i < n;i++){
        cin>>a[i];
    }
    plusMinus(a, n);
    return 0;
}
