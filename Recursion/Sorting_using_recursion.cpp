#include <bits/stdc++.h>
using namespace std;

#define int long long  
#define endl '\n'   
void placer(vector<int>&arr , int temp){
    if(arr[arr.size()-1]<= temp){
      arr.push_back(temp);
    }
    else {
      int tempo=arr[arr.size()-1];
      arr.pop_back();
      placer(arr , temp);
      arr.push_back(tempo);
    }
}
void solve(vector<int>&arr){
   if(arr.size()==1) return;
   int temp=arr[arr.size()-1];
   arr.pop_back();
   solve(arr);
   placer(arr , temp);
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t; 
    while (t--) {
    vector<int> arr={4 ,23 ,2, 6, 32 ,6,8,22};
    solve(arr);
    for(auto i : arr){
      cout<<i<<" ";
    }     
  }
return 0;
}