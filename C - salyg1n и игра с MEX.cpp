#include<iostream>
#include<vector>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int > s(n+5);
		int mex = -1;
		for(int i = 0;i<n;i++){
			cin>>s[i];
		}
		for(int i = 0;i<n;i++){
			if(s[i] != i){
				mex = i;
				break;
			}
		}
		if(mex == -1 ) mex = s[n-1] + 1;
		printf("%d\n",mex);
		int y;
		cin>>y;
		while(y != -1){
			cout<<y<<endl;
			cin>>y;
		}
	}
	return 0;
}
