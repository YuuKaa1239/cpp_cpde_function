#include <bits/stdc++.h>
using namespace std;
void encode(string s){
	int b[1000];
    int maxE=0;
    set<char> st,st1,st2;
    for(int i=0;i<s.length();++i){
	   	st.insert(s[i]);
	   	if(s[i]>64&&s[i]<91) st1.insert(s[i]);
	   	
	   	else if(s[i]>96&&s[i]<123) st2.insert(s[i]);
  	 }
   	for(set<char>::iterator it=st.begin();it!=st.end();++it){
	   	if(*it>64&&*it<91) maxE=max(maxE,(int)*it);
	   	
	   	else if(*it>96&&*it<123) maxE=max(maxE,(int)*it);
 	  }
    for(int i=0;i<=maxE;++i) b[i]=0;
    for(int i=0;i<s.length();++i) b[s[i]]++;
    for(set<char>::iterator it=st2.begin();it!=st2.end();++it){
   		cout<<b[*it]<<*it;
    }
    for(set<char>::iterator it=st1.begin();it!=st1.end();++it){
   		cout<<b[*it]<<*it;
    }
}

int main(){
	string s;
	cin>>s;
	encode(s);
}

// Example:
// Input: aaaaaaaaaaaaaaaaGsssSSSSSSSSSSSSSSSSSSRRRRRRRRRaaaaaaaaaaoDDlllllggggggggyyyyyyyyIIIeeeeeeeeeeeeeeeekkkkkkkkkkkkkkkkkkkjjjjjjjjjjjjjjjqqqqqqqqqqccccccccccccccccccEEEEEEEEbbbbbbbbbbbbbbbbbbbbaaaaaaaaaaaaaaaaaaaaKKKKKKKKKKKKKkSLLLLLLL
// Output: 46a20b18c16e8g15j20k5l1o10q3s8y2D8E1G3I13K7L9R19S
