#include <bits/stdc++.h>
using namespace std;
long long n,i,a,f[100005],ans;
int main()
{
	float s;
    cin>>s;
    srand(time(NULL));
    int res=rand()%(100-0+1)+0;
    if(res<=s-1) cout<<res<<" "<<s<<"%"<<" CRIT";
    else cout<<res<<" "<<s<<"%"<<" NO CRIT";   
}
