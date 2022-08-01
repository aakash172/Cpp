#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+10;
int BIT[N];
void update(int i,int x){
    for ( ; i < N; i+=(i& -i))
    {
        BIT[i]+=x;
    } 
}
int totalSum(int i){
    int ans=0;
    for ( ; i >0; i-=(i & -i))
    {
        ans+=BIT[i];
    }
    return ans; 
}
int main()
{
    return 0;
}