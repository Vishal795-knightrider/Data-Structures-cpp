// Longest Subarray with Sum k (array hav only positives ele)

#include <bits/stdc++.h>
using namespace std;

// Brute force (generate all subarrays)
// int main(){
//   int arr[]={1,2,3,1,1,1,1,4,2,3};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   cout << "Enter k: ";
//   int k; cin >> k;
//   int maxlen=0;
//   for(int i=0;i<n;i++){
//     int sum=0;
//     for(int j=i;j<n;j++){
//       sum+=arr[j];
//       if(sum==k) maxlen=max(maxlen,j-i+1);
//     }
//   }
//   cout << "The longest subarray is: " << maxlen;
// }


//Better solution (hashing) (will store prefix sum in hash map)  (it is optimal sol for arr if it has positives and negatives)
// int main(){
//   int arr[]={1,2,3,1,1,1,1,4,2,3};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   cout << "Enter k: ";
//   int k; cin >> k;
//   unordered_map<int,int> presum;
//   int sum=0;int maxlen=0;
//   for(int i=0;i<n;i++){
//   sum+=arr[i];    //array me linearly me jate hue sum calculate krta hua aa rha hu
//   if(sum==k) maxlen=max(maxlen,i+1);

//   int rem=sum-k;       //jo sum calculat hota aa raha hai usme se agar tum k minus krdo which is remain(and agar rem hame hash map me mil jaye) then i will get the subaary with sum k (as current idx as the last position of that subarray)
//   if(presum.find(rem)!=presum.end()){
//     int len=i-presum[rem];  //to us subaray ki lenght hogu current idx - presum sum jo hame chahiye the uski idx
//     maxlen=max(maxlen,len);
//   }
//   presum[sum]=i;             //<sum,idx>  map me sum key and uski idx value store kr rahe hai
//   }
//   cout << "The longest subarray is: " << maxlen;
// }


// upper solution but if there are zeroes in array
int main(){
  int arr[]={1,2,3,1,1,1,1,4,2,3};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout << "Enter k: ";
  int k; cin >> k;
  unordered_map<int,int> presum;
  int sum=0;int maxlen=0;
  for(int i=0;i<n;i++){
  sum+=arr[i];    //array me linearly me jate hue sum calculate krta hua aa rha hu
  if(sum==k) maxlen=max(maxlen,i+1);

  int rem=sum-k;       //jo sum calculat hota aa raha hai usme se agar tum k minus krdo which is remain(and agar rem hame hash map me mil jaye) then i will get the subaary with sum k (as current idx as the last position of that subarray)
  if(presum.find(rem)!=presum.end()){
    int len=i-presum[rem];  //to us subaray ki lenght hogu current idx - presum sum jo hame chahiye the uski idx
    maxlen=max(maxlen,len);
  }
  if(presum.find(sum)==presum.end()){
    presum[sum]=i;
  }
}
cout << "The longest subarray is: " << maxlen;
}