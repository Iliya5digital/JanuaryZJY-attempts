#include<bits/stdc++.h>
using namespace std;
int nex[2000005][2];
int exist[2000005];
int cnt = 0;
int n;
#define IO                       \
	ios::sync_with_stdio(false); \
	std::cin.tie(0);             \
	std::cout.tie(0)
//#define endl '\n'
void ins(int x){
    int p = 0;
    for(int i = 20;i>=0;i--){
        int t = (x >> i) & 1;
        if(!nex[p][t]){
            nex[p][t] = ++cnt;
        }
        p = nex[p][t];
    }
    exist[p] = true;
    return ;
}
bool func(int x){
    int ans = 0;
    int p = 0;
    for(int i = 20;i>=0;i--){
        int t = (x >> i) & 1;
        if(nex[p][t ^ 1]){
            ans += (1 << i);
            p = nex[p][t ^ 1];
        }else p = nex[p][t];
    }
    return ans < n;
}
int main(){
//	IO;
    cin>>n;
    vector<int> vec(n+5);
    for(int i =1;i<n;i++){
        cin>>vec[i];
        vec[i] ^= vec[i-1];
        ins(vec[i]);
    }
    for(int i = 0;i<n;i++){
        if(func(i)) {
            for(int j = 0;j<n;j++){
                cout<<(vec[j] ^ i)<<" ";
            }
            break;
        }
    }

    return 0;
}
