#include <bits/stdc++.h>
using namespace std;

struct Item{
double value,weight;
};

bool cmp(Item a,Item b){
	return (a.value/a.weight) >= (b.value/b.weight);
}

int main(){
	int n; cin >> n;
	double w; cin >> w;
	
	Item arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i].value >> arr[i].weight;
	}
	sort(arr,arr+n,cmp);
	double total=0;

	for(int i=0;i<n;i++){
		if(arr[i].weight<=w){
			w -=arr[i].weight;
			total +=arr[i].value;
		}
		else{
			total +=arr[i].value*(w/arr[i].weight);
			break;
		}
	}
	cout << fixed << setprecision(6) << total;
}