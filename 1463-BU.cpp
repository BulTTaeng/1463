#include <iostream>

using namespace std;

int dp[1000001] = { 0, };

int main() {
  int x ;
  cin >> x;
  
  dp[1] = 0;
  dp[2] = 1;
  dp[3] = 1;

  for(int i =4; i<x+1; i++){
    dp[i] = dp[i-1] + 1;

    if(i%3 == 0){
      if(dp[i/3] +1< dp[i]){
        dp[i] = dp[i/3] +1;
      }
    }

    if(i%2 == 0){
      if(dp[i/2] +1 < dp[i]){
        dp[i] = dp[i/2] +1;
      }
    }
  }
  cout << dp[x];

  return 0;

}