#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
typedef long long ll;
const int maxn=1e5+5;

int n,a[maxn];

int prime[maxn],ct,phi[maxn];
bool vis[maxn];
void Eular(int n){
	phi[1]=1;
	for(int i=2;i<=n;i++){
		if(!vis[i]){
			prime[++ct]=i;
			phi[i]=i-1;
		}
		for(int j=1,p=prime[1];j<=ct && i*p<=n;p=prime[++j]){
			vis[i*p]=true;
			if(i%p==0){
				phi[i*p]=phi[i]*p;
				break;
			}
			else phi[i*p]=phi[i]*(p-1);
		}
	}
}

int cnt[maxn],d[maxn];
void getd(int x){
	d[0]=0;
	for(int i=1;i*i<=x;i++){
		if(x%i==0){
			if(i*i==x)d[++d[0]]=i;
			else {
				d[++d[0]]=i;
				d[++d[0]]=x/i;
			}
		}
	}
//	sort(d+1,d+d[0]+1);
}
int gcd(int a,int b){
	while(b)b^=a^=b^=a%=b;
	return a;	
}

int main(){
	Eular(1e5);
//	for(int i=1;i<=100;i++)
//		cout<<phi[i]<<" ";
//	puts("");
//	int f[105];
//	for(int i=1,cc=0;i<=100;i++){
//		cc=0;
//		for(int j=1;j<=i;j++)
//			if(gcd(i,j)==1)cc++;
//		f[i]=cc;
//	}
//	for(int i=1;i<=100;i++)
//		cout<<f[i]<<" ";
//	puts("");
	int T;
	cin>>T;
	while(T--){
		memset(cnt,0,sizeof(cnt));
		ll ans=0,t=0;
		cin>>n;
		for(int i=1;i<=n;i++)
			cin>>a[i];
		sort(a+1,a+n+1);
		
		for(int i=1;i<=n;i++){
			getd(a[i]);t=0;
			for(int j=1,k=d[1];j<=d[0];k=d[++j]){
				t+=1ll*cnt[k]*phi[k];
				cnt[k]++;
			}
			ans+=t*(n-i);
		}
		cout<<ans<<endl;
	}
	return 0;
}
/*
1
4
1 2 4 5

*/
