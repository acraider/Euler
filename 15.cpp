#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define EB emplace_back
#define MP make_pair
#define all(o) (o).begin(), (o).end()
#define mset(m,v) memset(m,v,sizeof(m))
#define fr(i,n) for(lli i=0;i<n;++i)
#define rep(i,a,b) for(lli i=a;i<=b;++i)
#define remin(a,b) (a=min((a),(b)))
#define remax(a,b) (a=max((a),(b)))
#define endl '\n'
typedef long long int lli;
typedef long double ld;
typedef pair< lli,lli > ii;
typedef vector<lli> vi;
typedef vector<ii> vii;
typedef vector<vi> graph;
lli MOD=1000000007;long double EPS=1e-9;

#define SIZE 2000000
long long int arr[2][SIZE+1]={0};
long long int combi(int n, int r){
	if(n==r)return 1;
	if(r==0)return 1;
	if(r==1)return n;
	arr[0][0] = 0;
	arr[0][1] = 1;
	arr[1][0] = 1;
	for(int i=1; i<=n;++i){
		for(int j=1; j<=i;++j){
			arr[1][j] = arr[0][j-1] + arr[0][j];
		}
		for(int j=0; j<=i;++j){
			arr[0][j] = arr[1][j];
		}
	}
	return arr[0][r];
}

void pre(){

}

void solve(){
	cout<<combi(40,20);

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	pre();
	int t=1;
	//cin>>t;
	for(int i=1;i<=t;i++){
		//cout<<"Case #"<<i<<": ";
		solve();
	}
}