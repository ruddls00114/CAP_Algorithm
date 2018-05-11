#include<iostream>
#include<vector>
#include<queue>
#include<utility>
#include<algorithm>
#define IOFAST() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main(){
	IOFAST();

	int i, testcase;


	cin >> testcase;
	for (i = 0; i < testcase; i++){

		int  j, k, n, m, imp, cnt = 0,flag=0;
		queue <pair<int, int>> q;
		vector<int> v;
		cin >> n >> m;
		for (j = 0; j < n; j++){
			cin >> imp;
			v.push_back(imp);
			q.push(make_pair(j, imp));
		}
		sort(v.rbegin(), v.rend());
		for (k = 0;  k < v.size() || flag==1 ; k++){
			for (j = 0; j < q.size(); j++){
				if (v[k] == q.front().second){
					cnt++;
					if (m == q.front().first){
						cout << cnt << '\n';
						flag = 1;
					}
					q.pop();
					break;
				}
				else{	// 최대값의중요도가 아닐때 다시 큐에 삽입
					int a, b;
					a = q.front().first;
					b = q.front().second;
					q.pop();
					q.push(make_pair(a, b));
				}
			}
		}
		getchar();
	}//case




	return 0;

}