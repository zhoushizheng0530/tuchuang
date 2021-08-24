#include <bits/stdc++.h>
using namespace std;
int main() 
{
    freopen("happy.in", "r", stdin);
    freopen("happy.out", "w", stdout);
	int n,ans=0;
    cin>>n;
    for (int i = 1; i <= n; i++) 
    {
    	int tmp;
    	cin>>tmp;
		ans^=tmp;
	}
    cout<<ans;
}
