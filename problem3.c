#include <bits/stdc++.h>
using namespace std ;

int main() {

int n =0;
cin >> n;
int arr [n];
for (int i=0;i<n;i++){
    cin >> arr[i];
}
int right = n-1 , left =0;
while (right>=left){
    for (int j=0;j<n;j++){
        if (arr[right]>arr[left]){
            left++;
        }
        else {
            right--;
        }
}
      if (arr[right]>arr[left]){
           cout << arr[right];
        }
        else {
            cout<<arr[left];
        }
}
}

