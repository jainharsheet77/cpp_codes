// https://www.codechef.com/MAY20B/problems/COVID19
#include<bits/stdc++.h>
using namespace std;
 
 
#define rep(i,n,m) for(int i=n;i<m;i++)
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(c) c.begin(), c.end()
#define desc_sort(v) sort(v.rbegin(),v.rend())
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define M 1000000007 
#define pushll(head,d) push_into_linkedlist(&head,d)
#define popll(head) dp_delete_first(&head)
#define eol cout<<"\n"
#define N 1000000
#define int long long
#define hell INT_MIN;
#define heaven INT_MAX;
typedef long long ll;


void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    rep(i,0,n)
        cin>>v[i];
    sort(all(v));
    if(n==1)
    {
        cout<<"1 1"<<endl;
        return;
    }
    int sz=1;
    int mini=heaven;
    int maxi=hell;
    for(int i=1;i<n;i++)
    {
        if(v[i]-v[i-1]<=2)
            sz++;
        else
        {
            mini=min(mini,sz);
            maxi=max(maxi,sz);
            sz=1;
        }
    }
    mini=min(mini,sz);
    maxi=max(maxi,sz);
    cout<<mini<<" "<<maxi<<endl;
    return;
    
}

 
signed main()
{   
    ios
    int T=1;
    cin>>T;
  	while(T--)
    {      
        cout<<endl;
		solve();
        
    }
    
}  
