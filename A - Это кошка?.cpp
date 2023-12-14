#include <bits/stdc++.h>             //woeing answer at text 8 
using namespace std;                 
int main()
{
    int n,m,j,temp=0;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m>>s;
        if((s[0]=='m'||s[0]=='M')&&(s[m-1]=='w'||s[m-1]=='W')&&m>3)
        {
			for(j=0;s[j]=='m'||s[j]=='M';j++)
			{
				temp++;
			}
			for(;s[j]=='e'||s[j]=='E';j++)
			{
				temp++;
			}
			for(;s[j]=='o'||s[j]=='O';j++)
			{
				temp++;
			}
			for(;s[j]=='w'||s[j]=='W';j++)
			{
				temp++;
			}
			if(temp==m)
			{
				cout<<"Yes"<<"\n";
			}
			else
			{
				cout<<"No"<<"\n";
			}
			temp=0;
        }
        else
        {
            cout<<"No"<<"\n";
        }
    }
}
