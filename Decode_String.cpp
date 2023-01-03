#include<bits/stdc++.h>  
using namespace std;  
main() {
	string s;
	cin>>s;
   stack<char> st;
   int temp=0;
   string ans="";
   while(temp<s.size()){
   	if(s[temp]>64){
		int n=0;
		int x=1;
		while(!st.empty()){
			n=n+(st.top()-'0')*x;
			x*=10;
			st.pop();
		}
		for(int i=0;i<n;++i){
		 ans+=s[temp];
		}
	   }
	else{
		st.push(s[temp]);
	}
	temp++;
   }
   cout<<ans;
}  
// Example:
// Input: 3a10c
// Output:aaacccccccccc
