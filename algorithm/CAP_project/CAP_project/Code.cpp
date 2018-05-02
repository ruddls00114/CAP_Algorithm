#include<iostream>
#include<string>
#include<stack>
#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main(){
	IOFAST();

	int t, j, cnt = 0;
	string str;
	stack<char> st;
		str = "";
		cin >> str;
		for (j = 0; j<str.length(); j++){
			if (str[j] == '('){
				st.push(j);
			}
			else {		//(str[j] == ')')
				if (st.empty())	{
					st.push(j);
					st.pop();
					
				}
				else if (j - 1 == st.top()){ //레이저
					st.pop();
					cnt += st.size();
				}
				else{
					st.pop();
					cnt += 1;
				}
			}
		} //for
		cnt = st.size() + cnt;
		cout << cnt << '\n';

	return 0;
}
