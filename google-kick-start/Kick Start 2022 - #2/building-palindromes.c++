#include <iostream>
#include <bits/stdc++.h>

using namespace std;
        
int main() {
  int n,q,ans=0;
  cin>>n>>q;
  string s;
  
  cin>>s;
  vector<vector<int>> prefix(n+1,vector<int>(26, 0));

  for(int i=0;i<n;i++){
    int temp=s[i]-'A';
    for(int j=0;j<26;j++){
        prefix[i+1][j]=prefix[i][j];
    }
    prefix[i+1][temp]++;
  }

  while(q--){
      int l,r;
      cin>>l>>r;
      l--;
      r--;
      int even=0,odd=0,total=r-l+1;
      for(int i=0;i<26;i++){
          int temp = prefix[r+1][i]-prefix[l][i];
          if(temp>0 && temp&1){
            odd++;
          }
          else if(temp>0 && !(temp&1)){
            even++;
          }
      }
      if(odd==0 && even){
          ans++;
      }
      else if(total&1 && odd==1){
          ans++;
      }
  }
  cout << ans << endl;
}