//  https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/modify-the-string/

#include <iostream>
#include <string.h>

using namespace std;

int main() {
	string s;

	cin>>s;

	for(int i = 0 ; i < s.length() ; i++){
		if(s[i]>='a' && s[i]<='z'){
			s[i] -= 32;
		}
		else if(s[i]>='A' && s[i]<='Z'){
			s[i] += 32;
		}
		cout<<s[i];
	}

    return 0;
}