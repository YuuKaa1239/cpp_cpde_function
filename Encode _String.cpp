#include <bits/stdc++.h>
using namespace std;
string to_string(long long n){
    string s = "";
    while (n > 0){
        s = char (n%10 + '0') + s;
        n /= 10;
    }
    return s;
}

int main(){
	string s;
	getline(cin, s);
 	s = s + '@';
    stack<char> st;
    string str = "";
    for (int i = 0; i < s.length(); i++){
        if (st.empty() || st.top() == s[i]){
            st.push(s[i]);
        } else {
            int count = 0;
            string str1="";
            str1 = str1 + st.top();
            while(!st.empty()){
                count++;
                st.pop();
            }
            str = str+to_string(count)+str1;
            st.push(s[i]);
        }
    }
    cout << str;
}

// Example:
// Input: aaaaaaaaaaaaaaaaGsssSSSSSSSSSSSSSSSSSSRRRRRRRRRaaaaaaaaaaoDDlllllggggggggyyyyyyyyIIIeeeeeeeeeeeeeeeekkkkkkkkkkkkkkkkkkkjjjjjjjjjjjjjjjqqqqqqqqqqccccccccccccccccccEEEEEEEEbbbbbbbbbbbbbbbbbbbbaaaaaaaaaaaaaaaaaaaaKKKKKKKKKKKKKkSLLLLLLL
// Output: 16a1G3s18S9R10a1o2D5l8g8y3I16e19k15j10q18c8E20b20a13K1k1S7L
