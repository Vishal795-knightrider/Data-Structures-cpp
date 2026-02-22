#include <bits/stdc++.h>
using namespace std;

//selection sort
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     for(int i=0;i<=n-2;i++){
//         //internal loop to find min
//         int mini=i;
//         for(int j=i;j<=n-1;j++){
//             if(arr[j]<arr[mini]) mini=j;
//         }
//         swap(arr[i],arr[mini]);
//     }
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
// }



//buble sort
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     for(int i=n-1;i>=1;i--){   //i=0 not taken single ele already sorted
//         for(int j=0;j<=i-1;j++){    //i-1 bcoz no element to compare with last element
//             if(arr[j+1]<arr[j]) swap(arr[j],arr[j+1]);
//         }
//     }
//     for(auto it:arr){
//         cout << it << " ";
//     }
// }


// optimize buble sort
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int didswap =0;
//     for(int i=n-1;i>=1;i--){   
//         for(int j=0;j<=i-1;j++){    
//             if(arr[j+1]<arr[j]) {
//                 swap(arr[j],arr[j+1]);
//                 didswap++;
//             }
//         }
//         if(didswap==0) break;
//     }
//     for(auto it:arr){
//         cout << it << " ";
//     }
// }


// insertion sort

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     for(int i=0;i<=n-1;i++ ){
//         int j=i;
//         while(j>0 && arr[j-1]>arr[j]){
//             swap(arr[j-1],arr[j]);
//             j--;
//         }
//      }

//     for(auto it:arr){
//         cout << it << " ";
//     }
// }



//merge sort 
// void merge(int arr[],int low,int mid,int high){
//     int temp[high-low+1];
//     int left=low;int right=mid+1;int i=0;
//     while(left<=mid && right<=high){
//         if(arr[left]<=arr[right]){
//             temp[i]=arr[left];
//             left++;
//         }
//         else{
//             temp[i]=arr[right];
//             right++;
//         }
//         i++;
//     } 
//     while(left<=mid){
//             temp[i]=arr[left];
//             left++;
//             i++;
//         }
//         while(right<=high){
//             temp[i]=arr[right];
//             right++;
//             i++;
//         }
//         for(int i=low;i<=high;i++){
//             arr[i]=temp[i-low];
//         }
// }

// void merge_sort(int arr[],int low,int high){
//     if(low==high) return;
//     int mid=(high+low)/2;
//     merge_sort(arr,low,mid);
//     merge_sort(arr,mid+1,high);
//     merge(arr,low,mid,high);
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     merge_sort(arr,0,n-1);
//     for(auto it:arr){
//         cout << it << " ";
//     }
// }





//Quick sort

// int  partition(int arr[],int low,int high){
//     int i=low;int j=high;int pivot=arr[low];
//     while(i<j){
//         while(arr[i]<=pivot && i<=high-1){
//             i++;
//         }
//         while(arr[j]>pivot && j >= low+1){
//             j--;
//         }
//         if(i<j) swap(arr[i],arr[j]);  //if ke andar i<j hai 
//     }                               //ho sakta hai ki while chalne baad i j se age nikal jaye
//     swap(arr[low],arr[j]); // at the end we know that the j will be at    //arr[low]=pivot
//     return j;              //the last of the left array
//}                        
// void q_sort(int arr[],int low,int high){
//     if(low < high) { //means morre than single element
//     int partionIndex=partition(arr,low,high);
//     q_sort(arr,low,partionIndex-1);
//     q_sort(arr,partionIndex+1,high);
//     }
// }


// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     q_sort(arr,0,n-1);
//     for(auto it:arr){
//         cout << it << " ";
//     }
// }

 

//SHELL 
// #include <bits/stdc++.h>
// using namespace std;


// int main(){
// 	int  n; cin >> n;
// 	cin.ignore();

// 	string line;
// 	getline(cin,line);

// 	stringstream ss(line);
// 	vector<int> vec;
// 	int x;
// 	while(ss >> x){
// 		vec.push_back(x);
// 	}
// 	if(vec.size()!= n) cout<<"-1";
// 	else{
// 	for(int g=n/2;g>=1;g=g/2){
// 		for(int j=g;j<n;j++){
// 			for(int i=j-g;i>=0;i= i-g){
// 				if(vec[i+g]>vec[i]) break;
// 				else swap(vec[i+g],vec[i]);
// 			}
// 		}
// 	}
// 	for(int i=0;i<vec.size();i++){
// 		cout << vec[i];
// 		if(i!=n-1) cout << " ";
// 	}
// }
// }



// //Counting Sort
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n;
// 	cin >> n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin >> arr[i];
// 	}
// 	int max=*max_element(arr,arr+n);
// 	int count[max+1]={0};
// 	int output[n];
// 	//frequency
// 	for(int i=0;i<n;i++){
// 		count[arr[i]]++;
// 	}
	
// 	for(int i=1;i<=max;i++){
// 		count[i]=count[i]+count[i-1];
// 	}
	
// 	for(int i=n-1;i>=0;i--){
// 		output[--count[arr[i]]]=arr[i];
// 	}
// 	//copy to origina array
// 	for(int i=0;i<n;i++){
// 		arr[i]=output[i];
// 	}

// 	for(int i=0;i<n;i++){
// 		cout << arr[i];
// 		if(i!=n-1) cout << " ";
// 	}
// }



//Radix Sort

	void countsort(int arr[],int n,int place){
		int output[n];
		int count[10]={0};
		
		for(int i=0;i<n;i++){
			count[(arr[i]/place)%10]++;
		}
		
		for(int i=1;i<10;i++){
			count[i]=count[i]+count[i-1];
		}
		
		for(int i=n-1;i>=0;i--){
			output[--count[(arr[i]/place)%10]]=arr[i];
		}
		
		for(int i=0;i<n;i++){
			arr[i]=output[i];
		}
	}

int main(){
	int n; cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int max=*max_element(arr,arr+n);
	for(int place=1;max/place>0;place *=10){
		countsort(arr,n,place);
	}
	
	for(int i=0;i<n;i++){
		cout << arr[i];
		if(i!=n-1) cout << " ";
	}
}