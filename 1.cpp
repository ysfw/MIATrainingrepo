#include <bits/stdc++.h>
using namespace std ;

int sum (int n){
  return n*(n+1)/2;
}

int main() {

int n,k;
cin >> n>>k;
int timeleft =240-k;
int start=0,end=n,mid;
while (start<end){
  mid = (start +end+1)/2;
  if (5*sum(mid)<=timeleft){
    start=mid;
  }
  else{
    end=mid-1;
  }
}
cout << start <<endl;
return 0;
}


