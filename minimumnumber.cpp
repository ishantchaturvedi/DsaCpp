#include<iostream>
using namespace std;
#include<set>
#include<vector>
#include<map>
#include<unordered_map>
#include<queue>
#include<stack>
#include<algorithm>
#include<string>

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

const int N = 1e3+2, MOD = 1e9+7;
int dp[N];

int MinSquare(int n)
{

    if(n == 1 || n==2 || n == 3 || n == 0)
    return n;

    if(dp[n] != MOD)
       return dp[n]; 

    for(int i=1; i*i <= n; i++)
    {
        dp[n] = min(dp[n], 1 + MinSquare(n-i*i));
    }

    return dp[n];
}

signed main(){

    rep(i,0,N)
        dp[i] = MOD;

    int n;
    cin >> n;

    cout << MinSquare(n) << endl;
    return 0;
}
