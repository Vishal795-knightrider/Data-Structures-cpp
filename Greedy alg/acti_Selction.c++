#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
	return a.second < b.second;
}
int main(){
	int n; cin >>n;
	vector<int> str(n),end(n);
	
	for(int i=0;i<n;i++){
		cin >> str[i];
	}
	
	for(int i=0;i<n;i++){
		cin >> end[i];
	}
	vector<pair<int,int>> act;
	for(int i=0;i<n;i++){
		act.push_back({str[i],end[i]});
	}

	sort(act.begin(),act.end(),cmp);
	//select first act
	int count=1;
	int lastEnd=act[0].second;

	for(int i=1;i<n;i++){
		if(act[i].first>lastEnd){
			count++;
			lastEnd=act[i].second;
		}
	}
	cout << count;
}