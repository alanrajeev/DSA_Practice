#include <bits/stdc++.h>

using namespace std;

void birthdayCandles(int a[],int n){
    int maxVal = a[0],res=0;
    for (int i = 0; i<n; i++) {
        if(maxVal<a[i])
          maxVal = a[i];
    }
    for(int k=0;k<n;k++){
      if(a[k]==maxVal)
          res++;
    }
    cout<<res<<endl;
}
int main() {
  int n;
  cin>>n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  birthdayCandles(a,n);
  return 0;
}
