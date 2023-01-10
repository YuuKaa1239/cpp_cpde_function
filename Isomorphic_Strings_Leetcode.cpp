#include <bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<b;++i)
using namespace std;
//just use class Solutions to submit 
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, int> s_map,t_map;
        for(int i=0;i<s.length();++i){
        	if(s_map[s[i]]!=t_map[t[i]]) return false;
        	else {
        		s_map[s[i]] =i+1;
        		t_map[t[i]] =i+1;
			}
		}
		return true;
    }
};
int main() {
   Solution st;
   string s,t;
   cin>>s>>t;
   if(st.isIsomorphic(s,t)) cout<<"true";
   else cout<<"false";
   return 0;
}
