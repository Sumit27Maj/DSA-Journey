#include <bits/stdc++.h>
using namespace std;

#define int long long  
#define endl '\n'   
void placer(stack<int>&st , int temp){
    if(st.empty() || st.top()>= temp){     //st.top()<= temp for desc
      st.push(temp);
      return;
    }
    else {
      int tempo=st.top();
      st.pop();
      placer(st , temp);
      st.push(tempo);
    }
}
void solve(stack<int>&st){
   if(st.size()==1) return;
   int temp=st.top();
   st.pop();
   solve(st);
   placer(st , temp);
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t; 
    while (t--) {
    stack<int> st;
    st.push(22);
    st.push(20);
    st.push(3);
    st.push(60);
    st.push(20);
    st.push(3555);
    st.push(109);
    st.push(234);
    st.push(1);
    solve(st);
   while (!st.empty()) {
        std::cout << st.top() << " ";
        st.pop();
    }      
  }
return 0;
}