#include <bits/stdc++.h>
using namespace std;

int used[20] , number[20];
void permut(int loc, int n){
	if(loc==n+1){
		for (int i = 1; i <= n; i++)
		{
			cout<<number[i];
		}
		cout<<endl;
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		if(!used[i]){
			used[i] = 1;
		number[loc] = i;
			permut(loc+1,n);
			used[i]=0;
		}
	}
}

int main()
{
	int str ;
    cin>>str;
	permut(1,str);
}

