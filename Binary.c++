#include <bits/stdc++.h>
using namespace std;

//whenver the search space  is sorted and i have to search we will use binary search


//iterative implementation

// int bina(int arr[],int n,int target){
//     int low=0;
//     int high=n-1;
//     while(low<=high){
//             int mid=(low+high)/2;
//             if(arr[mid]==target) return mid;
//             else if(arr[mid]<target) low=mid+1;
//             else high=mid-1;
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     sort(arr,arr+n);
//     int target;
//     cout << "Enter the target:";
//     cin >> target;
//     int ans=bina(arr,n,target);
//     cout << "The index at which target is:" << ans;
// }


//Recurssion

// int bin(int arr[],int low,int high,int target){
//     if(low>high) return -1;
//     int mid=(low+high)/2;
//     if(arr[mid]==target) return mid;
//     else if(arr[mid]<target) return bin(arr,mid+1,high,target);
//     else return bin(arr,low,mid-1,target);
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     sort(arr,arr+n);
//     int target;
//     cout << "Enter the target";
//     cin >> target;
//     int ans=bin(arr,0,n-1,target);
//     cout << "The index is " << ans << " at which target is";
// }


//LOWER BOUND-> smallest index such that arr[index] >= given number
//array has to be sorted lower bound to be implemented

// int bin(int arr[],int n,int target){
//     int low=0;int high=n-1;
//     int ans=n;  //if element is not present we will returnn the size of array
//     while(low<=high){
//         int mid=(low+high)/2;
//         //may be an answer
//         if(arr[mid]>=target) {
//             ans=mid; 
//             //look for more small index on left
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int target;
//     cout << "Enter the target:";
//     cin >> target;
//     int res=bin(arr,n,target);
//     cout << res;
// }


//UPPER BOUND -> arr[index]>n

// int upperBound(int arr[],int n,int target){
//     int low=0;
//     int high=n-1;
//     int ans=n;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(arr[mid]>target){
//             ans=mid; high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }
//     return ans;
// }


// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int target;
//     cout << "Enter the target:";
//     cin >> target;
//     int res=upperBound(arr,n,target);
//     cout << "The index is:" << res;
// }



//Search insert position

// int lowerBound(int arr[],int n,int target){
//     int low=0;
//     int high=n-1;
//     int ans=n;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(arr[mid]>=target){
//             ans=mid; high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }
//     return ans;
// }


// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int target;
//     cout << "Enter the target:";
//     cin >> target;
//     int res=lowerBound(arr,n,target);
//     cout << "The index is:" << res;
// }




//floor and Ceil in sorted array

//floor

// int floor(int arr[],int n,int target){
//     int low=0;
//     int high=n-1;
//     int ans=-1;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(arr[mid]<=target){
//             ans=arr[mid];
//             low=mid+1;
//         }
//         else {
//             high=mid-1;
//         }
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int target;
//     cout << "Enter the target:";
//     cin >> target;
//     int res=floor(arr,n,target);
//     cout << "The floor is:" << res;
// }


//find the firts and last ocurrence of target
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int target;
//     cout << "Enter the target";  
//     cin >> target;
//     int first=-1;
//     int last=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]==target){
//             if(first==-1){
//                 first=i;           //tc=o(n)
//             }                      //sc=o(1)
//             last=i;
//         }
//     }
//     cout << "{" << first << "," << last  << "}";
// }


//using binary search
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int target;
//     cout << "Enter the target:";
//     cin >> target;
//     int first=-1;
//     int low=0; int high=n-1;
//     while(low<=high){
//         int mid=(high+low)/2;
//         if(arr[mid]==target) {
//             first=mid; 
//             high=mid-1;
//         }
//         else low=mid+1;  
//     }
// low=0;high=n-1;
// int last=-1;
// while(low<=high){
//     int mid=(low+high)/2;
//     if(arr[mid]==target){
//         last=mid;
//         low=mid+1;
//     }
//     else{
//         high=mid-1;
//     }
// }

// cout << first << " " << last;

// }




//Search in rotated sorted array 





//find peak element 

// int main(){               //brute
//     int n;    
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     for(int i=0;i<n;i++){
//         if((i==0 || arr[i-1]<arr[i])) && ((i==n-1 || arr[i]>arr[i+1])){
//             cout << i;
//         }
//     }
// } 



//optimal 

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     if(n==1) return 0;
//     if(arr[0]>arr[1]) return 0;
//     if(arr[n-1]>arr[n-2]) return n-1;
//     int low=1;
//     int high=n-2;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return mid;
//         else if(arr[mid]>arr[mid-1]) low=mid+1;
//         high=mid-1;
//     }
// }


//koko eating bnanaaas
//brute  
// int maxx(int arr[],int n){
//         sort(arr,arr+n);
//         return arr[n-1];
//     }
    
//     int time(int arr[],int hourly,int n){
//         int totalhr=0;                           //n
//         for(int i=0;i<n;i++){
//             totalhr+=ceil((double)arr[i]/hourly);
//         }
//         return totalhr;
//     }

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int hr;
//     cout << "Enter the hours:";
//     cin >> hr;
//     int reqtime;
//     for(int i=1;i<=maxx(arr,n);i++){
//         reqtime=time(arr,i,n);    //i hai bnanas per hr
//         if(reqtime<=hr) {                             //o(max(array))
//             cout << i  << " is the min int k";
//             break;
//         }
//     }                           //tc=o(max(array)*n)   time limit error
// }

//optimal
int maxx(int arr[],int n){
    sort(arr,arr+n);               
    return arr[n-1];
}

int time(int arr[],int hour,int n){
    int totalhr=0;
    for(int i=0;i<n;i++){ 
        totalhr+=ceil((double)arr[i]/hour);         //o(n)
    }
    return totalhr;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int hr;
    cout << "Enter the hours:" << endl;
    cin >> hr;
    int low=1; int high=maxx(arr,n);
    int ans=INT_MIN;
    while(low<=high){
        int mid=(low+high)/2;
        if(time(arr,mid,n)<=hr) {
            ans=mid;                       //o(log(max(arr)))
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout << ans << " is the min int";
}

