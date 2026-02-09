#include <bits/stdc++.h>
using namespace std;

  //1.brute code //Second largest

//   int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     int secondlarge;
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     sort(arr,arr+n);
//     int largest=arr[n-1];
//     for(int i=n-2;i>=0;i--){
//         if(arr[i]!=largest){
//             secondlarge=arr[i];
//             break;
//         }
//     }
//     cout << "second largest is:" << secondlarge;
//   }


  //optimal  //second largest

//   int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     int large=arr[0];
//     int Slarge=-1;   //considering array not contain negative elements
//     for(int i=1;i<n;i++){
//         if(arr[i]>large) {
//             Slarge=large;
//             large=arr[i];
//         } 
//         else if(arr[i]<large && arr[i]>Slarge){     // arr={1,2,4,7,7,5}
//             Slarge=arr[i];
//         }
//   }
//   cout << "second largest:" << Slarge;
// }


//2. check if the array is is_sorted

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int  i=0;i<n;i++){
//         cin >> arr[i];
//     }

//     for(int i=1;i<n;i++){
//         if(arr[i]>=arr[i-1]) {}
//         else return false;
//     }
//     return true;
// }



//3.Remove duplicates in place from sorted array
//brute
// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }

//   set<int> st;
//   for(int i=0;i<n;i++){
//     st.insert(arr[i]);     //nlogn
//   } 

//   int index=0;
//   for(auto it:st){
//     arr[index]=it;
//     index++;q              //o(n)
//   }
//   //T(c)=nlogn(insert in set)+n(iterating in set)   S(c)=(n)=size of set

//   cout << "size of new unique elements array is:" << index;
// }


//optimal   //using two pointer
// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }
//   sort(arr,arr+n);
//   int i=0;
//   for(int j=1;j<n;j++){
//     if(arr[i]!=arr[j]){
//       arr[i+1]=arr[j];
//       i++;
//     }
//   }
//   cout <<  "size of the new sorted array is" << i+1;
// }



//4.left rotate the array by one place
// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }

//   int x=arr[0];
//   for(int i=0;i<n-1;i++){   //o(n)   space =o(n) (array is used)  && extra space = o(1)
//     arr[i]=arr[i+1];
//   }
//   arr[n-1]=x;
//   for(int i=0;i<n;i++){
//     cout << arr[i] << " ";
//   }
// }



// left array by d places  //brute
// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }
//   int d;
//   cout << "Enter how many places you want to rotate:";
//   cin >> d;
//   d=d%n;
//   int temp[d];
//   for(int i=0;i<d;i++){
//     temp[i]=arr[i];         //o(d)   sc=o(d) array of size d
//   }

//   for(int i=d;i<n;i++){         //o(n-d)
//     arr[i-d]=arr[i];           //n-d elements we are tranferring
//   }
//   int j=0;
//   for(int i=n-d;i<n;i++){        //O(d)  putting back d elements
//     arr[i]=temp[j];
//     j++;
//   }

//   for(auto it: arr){          //tc=o(n+d)
//     cout << it <<" ";
//   }
// }


//optimal

// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }
//   int d;
//   cout << "Enter how many places you want to rotate:";
//   cin >> d;
//   reverse(arr,arr+d);      //o(d)
//   reverse(arr+d,arr+n);    //o(n-d)
//   reverse(arr,arr+n);     //o(n)       tc=o(2n) & sc=o(1)(not any extra space)
//   for(auto it: arr){
//     cout << it << " ";
//   }
// }
  


//5.move all zeroes to the end of tha array  //brute
// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }
//   vector<int> v;
//   for(int i=0;i<n;i++){
//     if(arr[i]!=0){
//        v.push_back(arr[i]);     //o(n)
//       }
//   }

//   for(int i=0;i<v.size();i++){       
//     arr[i]=v[i];                   //o(x) x is no. of non zero elements
//   }

//   for(int i=v.size();i<n;i++){   //o(n-x)
//     arr[i]=0;
//   }

//   for(auto it:arr){         //tc=o(2n)   sc=o(n)(worst case that there will be no zero)
//     cout << it << " ";
//   }
// }


//optimal
// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }

//   int j=-1;
//   for(int i=0;i<n;i++){  //o(x) x is first  index where zero is
//     if(arr[i]==0){
//       j=i;
//       break;
//     }
//   }

//   for(int i=j+1;i<n;i++){
//     if(arr[i]!=0){            //o(n-x)
//       swap(arr[i],arr[j]);
//       j++;
//     }
//   }

//     for(auto it:arr){
//       cout << it << " ";
//     }
// }



//6.union of two sorted arrays    //brute
// int main(){
//   int arr1[6]={1,1,2,3,4,5};      //n1 size
//   int arr2[6]={2,3,4,4,5,6};         //n2 size
//   set<int> st;
//   for(int i=0;i<6;i++){
//     st.insert(arr1[i]);  //o(n1logn) n is size of set
//   }

//   for(int i=0;i<6;i++){
//     st.insert(arr2[i]);  //o(n2logn) n is suze of set
//   }
 
//   for(auto it:st){        //o(n1+n2) worst case array1 and arr2 contain all differnet elements
//     cout << it << " ";
//   }                         //tc=o(n1logn+n2logn)+o(n1+n2)
// }                          //sc=o(n1+n2)(external set) + o(n1+n2)(this is for returning the answer)
 



//optimal
// int main(){
//   vector<int> a={1,1,2,3,4,5};
//   vector<int> b={2,3,4,4,5,6};
//   int n1=a.size();
//   int n2=b.size();
//   int i=0;
//   int j=0;
//   vector<int> unionn;
//   while(i<n1 && j<n2){
//     if(a[i]<=b[j]){     //a[i] chota hau iska matlab a[i] andar jayega
//       if(unionn.size()==0 || unionn.back()!=a[i]) {   //pehle condition empty ki likh phir baad me size agar size 0 hai to back() undefined hai
//         unionn.push_back(a[i]);
//       }
//       i++;
//       }
//     else{
//       if(unionn.size()==0 || unionn.back()!=b[j]) {
//         unionn.push_back(b[j]);
//       }
//       j++;
//     }
//   }
//   while(i<n1){
//     if( unionn.size()==0 || unionn.back()!=a[i]){
//       unionn.push_back(a[i]);
//     }
//     i++;
//   }
//   while(j<n2){
//     if(unionn.size()==0 || unionn.back()!=b[j]){
//       unionn.push_back(b[j]);
//     }
//     j++;
//   }
//   for(int it:unionn){
//     cout << it << " ";
//   }
// }


// 7.Intersection of two sorted arrays //brute
// int main(){
// vector<int> a={1,2,2,3,3,4,5,6};
// vector<int> b={2,3,3,5,6,6,7};
// int n1=a.size();
// int n2=b.size();
// vector<int> visited(n2,0);
// vector<int> ans;
// for(int i=0;i<n1;i++){
//   for(int j=0;j<n2;j++){
//     if(a[i]==b[j] && visited[j]==0){    //visited btayega konse a[i] wale ke liye b[j] wala store ho gya hai;
//       ans.push_back(a[i]);
//       visited[j]=1;
//       break;
//     }
//     if(b[j]>a[i]) break;     //agar j wala i se bada ho gya to ab to equal aa hi nhi kste kyuki sorted hai array
//   }
// }
// for(auto it:ans){
//     cout << it << " ";
//   }
// }

//optimal
// int main(){
//   vector<int> a={1,2,2,3,3,4,5,6};
//   vector<int> b={2,3,3,5,6,6,7};
//   int n1=a.size();
//   int n2=b.size();
//   int i=0;
//   int j=0;
//   vector<int> ans;
//   while(i<n1 && j<n2){
//     if(a[i]<b[j]){
//       i++;
//     }
//     else if(a[i]>b[j]){
//       j++;
//     }
//     else{
//       ans.push_back(a[i]);
//       i++;
//       j++;
//     }
//   }
//   for(int it:ans){
//     cout << it << " ";
//   }
// }


//MISSING NUMBER

//brute 
// int main(){
//   int n,flag;
//   cin >> n;
//   int arr[n];  
//   for(int i=0;i<n-1;i++){  //o(n) in worst case this loop run entirly
//     cin >> arr[i];
//   }
//   for(int i=1;i<=n;i++){    //o(n)
//     flag=0;
//     for(int j=0;j<n-1;j++){
//       if(arr[j]==i){
//         flag=1;
//         break;               //tc=o(n*n)
//       }                      //sc=o(1)
//     }
//     if(flag==0) cout << i <<"is the missing number";
//   }
// }


//better
// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n-1;i++){
//     cin >> arr[i];
//   }
//   int hash[n+1]={0};
//   for(int i=0;i<n-1;i++){      //o(n)
//     hash[arr[i]]+=1;
//   }
//   for(int i=1;i<=n;i++){       //o(n)
//     if(hash[i]==0) cout << i <<" is the missing number";
//   }
// }                   //tc=o(2n)   sc=o(n)(hash array)



//Optimal 
// int main(){
//   int n,sum2=0;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n-1;i++){
//     cin >> arr[i];
//   }
//   int sum=(n*(n+1))/2;
//   for(int i=0;i<n-1;i++){
//     sum2=sum2+arr[i];            //o(n)
//   }
//   int miss=sum-sum2;         //tc=o(n)  sc=o(1)
//   cout << miss << " is the missing number";
// }

//optimal 2
// int main(){
// }




//Maximum consecutive number

// int main(){
//   int n,cnt=0;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }
//   int maxi=0;
//   for(int i=0;i<n;i++){
//     if(arr[i]!=1) {cnt=0;}       //tc=o(n);
//     else{
//       cnt++;
//     }
//     if(cnt >= maxi){maxi=cnt;}
//   }
//   cout << "Maximum no. of consecutive one is:" << maxi;
// }


//find the number that appers once,and the others twice

// int main(){
//   int n;              //my thinking 
//   cin >> n;
//   int arr[n];              //better but Maximum number in array is very large then dikkat
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }
//   int maxi=*max_element(arr,arr+n);
//   int hash[maxi+1]={0};
//   for(int i=0;i<n;i++){
//     hash[arr[i]]+=1;
//   }
//   for(int i=0;i<= maxi;i++){
//     if(hash[i]==1) cout << i << " is the number that appers one";
//   }
// }



// brute
// int main(){
//   int n,nums,cnt;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }
//   for(int i=0;i<n;i++){
//     nums=arr[i];cnt=0;
//     for(int j=0;j<n;j++){       //tc=o(n*n)
//       if(arr[j]==nums) cnt++;
//     }
//     if(cnt==1) cout << nums <<" is the number which is once";
//   }
// }



// Better 
// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }
//   unordered_map<int,int> mp;
//   for(int i=0;i<n;i++){            //o(n)best case
//     mp[arr[i]]+=1;
//   }
//   for(auto it:mp){           //o(n/2+1)every number appear twice and one number one 
//     if(it.second==1){              
//       cout << it.first << " is the number which is once";
//     }
//   }
// }


//optimal
// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }
//   int XOR=0;
//   for(int i=0;i<n;i++){
//     XOR=XOR^arr[i];
//   }

//   cout << XOR << " is the number which is once";
// }




//longest subaray(contigous part of the array) with sum k (positives)
//brute

// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   int k;
//   cout << "Enter the sum:";
//   cin >> k;
//   int longLen=0; 
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }
//   for(int i=0;i<n;i++){
//     for(int j=i;j<n;j++){
//       int sum=0;                        //tc=o(n^3)
//       for(int x=i;x<=j;x++){            //sc=o(1)
//         sum=sum+arr[x]; 
//       }
//       if(sum==k){
//         longLen=max(longLen,j-i+1);
//       }
//     }
//   }
//   cout << longLen;
// }

// brute
// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }
//   int k; 
//   cout << "Enter the sum:";
//   cin >> k; 
//   int longLen=0;
//   for(int i=0;i<n;i++){
//     int sum=0;
//     for(int j=i;j<n;j++){               //tc=o(n^2)
//     sum=sum+arr[j];                     //sc=o(1)
//     if(sum==k){
//       longLen=max(longLen,j-i+1);
//     }
//     }
//   }
//   cout << longLen << " is the longest length";
// }



//Better(positives element + negatives + psitives )
// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }
//   int k;
//   cout << "Enter the sum";
//   cin >> k;
//   int maxlen=0;
//   long long sum=0;
//   unordered_map<long long,int> preSum;
//   for(int i=0;i<n;i++){
//     sum=sum+arr[i];
//     if(sum==k){
//       maxlen=max(maxlen,i+1);
//     }
//     int rem=sum-k;
//     if(preSum.find(rem)!=preSum.end()){
//       int len=i-preSum[rem];
//       maxlen=max(maxlen,len);
//     }
//     if(preSum.find(sum)==preSum.end()){
//       preSum[sum]=i;
//     }
//   }
//   cout << maxlen;
// }


//optimal





//2 sum problem
//better
// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }
//   int target;
//   cin >> target;
//   unordered_map<int,int> mp;
//   for(int i=0;i<n;i++){
//     int a=arr[i];
//     int b=target-a;              tc=o(n)
//     if(mp.find(b)!=mp.end()){     sc=o(n)
//       cout << mp[b] << " " <<  i;
//       break;
//     }
//     mp[a]=i;
//   }
// }


//using 2 pointer
// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }
//   int target;
//   cin >> target;
//   int i=0;
//   int j=n-1;
//   int flag=0;
//   sort(arr,arr+n);    //nlogn
//   while(i<j){          
//     int sum=arr[i]+arr[j];     //o(n)
//     if(sum==target){
//       cout << "YES";
//       flag=1;
//       break;
//     }                                   //tc=o(n+nlogn)
//     else if(sum < target) i++;          //sc=o(1)
//     else j--;
//   }
//   if(flag==0) cout << "False";
// }






//sort an array of 0's,1'sand 2's.
//better
// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }
//   int cnt0=0;
//   int cnt1=0;
//   int cnt2=0;
//   for(int i=0;i<n;i++){
//     if(arr[i]==0) cnt0++;      //o(n)
//     else if(arr[i]==1) cnt1++;
//     else cnt2++;
//   }
//   for(int i=0;i<cnt0;i++){
//     arr[i]=0;
//   }
//   for(int i=cnt0;i<cnt0+cnt1;i++){      //o(n)
//     arr[i]=1;
//   }
//   for(int i=cnt0+cnt1;i<n;i++){
//     arr[i]=2;
//   }
//   for(int it:arr){
//     cout << it << " ";   //tc=o(2n)
//   }
// }



//optimal
// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }
//   int low=0;
//   int mid=0;
//   int high=n-1;
//   while(mid<=high){
//     if(arr[mid]==0){
//       swap(arr[mid],arr[low]); low++; mid++;
//     }
//     else if(arr[mid]==1){ 
//       mid++;
//     }
//     else {
//       swap(arr[mid],arr[high]); high--;
//     }
//   }
//   for(int it:arr){
//     cout << it << " ";
//   }
// }


// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }
//   int low=0;
//   int high=n-1;
//   int mini=INT_MAX;
//   while(low<=high){                           
//     int mid=(low+high)/2;                  
//     if(arr[low]<=arr[mid]){                      //tc=0(log2n)
//       mini=min(arr[low],mini); low=mid+1;
//     }
//     else{
//       mini=min(arr[mid],mini); high=mid-1;
//     }
//   }
//   cout << "The minimum is:" << mini;
// }





//Single element in sorted array
//brute
  // int main(){
  //   int n;
  //   cin >> n;
  //   int arr[n];
  //   for(int i=0;i<n;i++){
  //     cin >> arr[i];
  //   }                               //tc=o(n)
  //   for(int i=0;i<n;i++){
  //     if(i==0){
  //       if(arr[i]!=arr[i+1]) cout << arr[i] << " is the single";
  //     }
  //     else if(i==n-1){
  //       if(arr[i]!=arr[i-1]) cout << arr[i] << " is the single";
  //     }
  //     else{
  //       if(arr[i]!=arr[i+1] && arr[i]!=arr[i-1]) cout << arr[i] << " is the single";
  //     }
  //   }
  //}
  //


//optimal
// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }
//   if(n==1) cout << arr[0] << " is the single element";
//   if(arr[0]!=arr[1]) cout << arr[0] << " is the single element";
//   if(arr[n-1]!=arr[n-2]) cout << arr[n-1] << " is the single element";
//   int low=1;
//   int high=n-2;
//   while(low<=high){
//     int mid=(low+high)/2;
//     if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]) cout << arr[mid] << " is the single element";
//     if((mid%2!=0 && arr[mid-1]==arr[mid])|| (mid%2==0 && arr[mid]==arr[mid+1])) low=mid+1;
//     else high=mid-1;
//   }
// }



//Majority element (>n/2)

//brute
// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }
//   for(int i=0;i<n;i++){      //tc=o(n^2)
//     int cnt=0;
//     for(int j=0;j<n;j++){
//       if(arr[i]==arr[j]) cnt++;
//     }
//     if(cnt>n/2) {cout << "The majority elements is" << arr[i]; break;} 
//   }
// }



// Better
// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++){   //nlogn
//     cin >> arr[i];
//   }
//   int goal=n/2;
//   unordered_map<int,int> mp;
//   for(int i=0;i<n;i++){
//     mp[arr[i]]+=1;              //o(n)   all are distict elements then o(n)
//   }
//   for(auto it:mp){
//     if(it.second>goal) cout << it.second << endl;   tc=o(nlogn)+o(n)
//   } 
// }



//optimal with sc=o(1);

// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }
//   int ele;
//   int cnt=0;
//   for(int i=0;i<n;i++){
//     if(cnt==0){
//       cnt=1;                     //o(n)
//       ele=arr[i];
//     }
//     else if(arr[i]==ele){
//       cnt++;
//     }
//     else cnt--;
//   }
//   int cnt1=0;
//   for(int i=0;i<n;i++){      //this step not done if problem says there will be always majority ele
//     if(arr[i]==ele) cnt1++;     //o(n)
//   }

//   if(cnt1>n/2) cout << ele;      //tc=o(2n)
// }


//maximum subarray sum
//better
// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i =0;i<n;i++){
//     cin >> arr[i];
//   }
//   int maxsum=0;
//   for(int i=0;i<n;i++){       
//     int sum=0;                    //tc=o(n^2)
//     for(int j=i;j<n;j++){
//       sum=sum+arr[j];
//       maxsum=max(sum,maxsum);
//     }
//   }
//   cout << maxsum;
// }


//optimal
// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++){  
//     cin >> arr[i];
//   }
//   int maxsum=INT_MIN;
//   int sum=0;
//   for(int i=0;i<n;i++){      //tc=o(n)
//     sum=sum+arr[i];          //sc=o(1)
//     if(sum<0) sum=0;
//     maxsum=max(sum,maxsum);
//   }
//   cout << maxsum;
// }



//subarray with maximum sum;
// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }
//   int start=0;
//   int ansStart=-1;
//   int ansEnd=-1;
//   for(int i=0;i<n;i++){
//     if(sum==0) start=i;
//     sum+=arr[i];
//     if(max>sum){
//       max=sum;
//       ansStart=start;
//       ansEnd=i;
//     }
//     if(sum<0){
//       sum=0;
//     }
//   }
//   cout << ansEnd-ansStart+1 << is the maximum subarray sum;
// }


//Best time to buy and sell stockes

// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }
//   int mini=arr[0];
//   int profit=0;
//   for(int i=1;i<n;i++){
//     int cost=arr[i]-mini;      //cost if i buy at a[i];
//     profit=max(profit,cost);
//     mini=min(mini,arr[i]);
//   }
//   cout << "Profit is:" << profit;
// }






//Ratate the  matrix by 90 degree 
//brute
// int main(){
//   int n;
//   cin >> n;
//   int arr[n][n];
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       cin >> arr[i][j];
//     }
//   }
//   int rotated[n][n];
//   cout << "Before rotating the array:" << endl;
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       cout << arr[i][j] << " ";
//     }
//     cout << endl;
//   }
//   cout << "After rotating the matrix:" << endl;
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       rotated[j][(n-1)-i]=arr[i][j];
//     }
//   }

//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       cout << rotated[i][j] << " ";
//     }
//     cout << endl;
//   }
// }  


//optimal
//  int main(){
//   int n;
//   cin >> n;
//   int arr[n][n];
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       cin >> arr[i][j];
//     }
//   }
//   cout << "Before rotating the array:" << endl;
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       cout << arr[i][j] << " ";
//     }
//     cout << endl;
//   }
//   cout << "After rotating the matrix:" << endl;
//   for(int i=0;i<n-1;i++){
//     for(int j=i+1;j<n;j++){
//       swap(arr[i][j],arr[j][i]);
//     }
//   }
//   for(int i=0;i<n;i++){
//     reverse(arr[i],arr[i]+n);
//   }
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       cout << arr[i][j] << " "; 
//     }
//     cout << endl;
//   }
// }



//Merge two sorted arrays
//Brute

// int  main(){
//   int n,m;
//   cin >> n >> m;
//   int arr1[n]; int arr2[m];
//   for(int i=0;i<n;i++){
//     cin >> arr1[i];
//   }
//   for(int i=0;i<n;i++){
//     cin >> arr2[i];
//   }
//   int arr3[n+m];
//   int left=0;
//   int right=0;
//   int idx=0;
//   while(left<n && right < m){
//     if(arr1[left]<arr2[right]){
//       arr3[idx]=arr1[left]; left++; idx++;
//     }
//     else{
//       arr3[idx]=arr2[right]; right++; idx++;    //o(n+m)
//     }
//   }
//   while(left<n){
//     arr3[idx]=arr1[left]; left++; idx++;
//   }
//   while(right<m){
//     arr3[idx]=arr1[right]; right++; idx++;
//   }
//   for(int i=0;i<n+m;i++){
// if(i<n) arr1[i]=arr3[i];
// else arr2[i-n]=arr3[i];                //o(n+m)
//   }
// }                         //tc=o(n+m)+o(n+m) sc=o(n+m)
 
 
//without extra space
// int main(){
//   int n,m;
//   cin >> n >> m;
//   int arr1[n]; int arr2[m];
//   for(int i=0;i<n;i++){
//     cin >> arr1[i];
//   }
//   for(int i=0;i<m;i++){
//     cin >> arr2[i];
//   }

//   int left=n-1;;
//   int right=0;
//   while(left>=0 && right<m){
//     if(arr1[left]>arr2[right]){
//       swap(arr1[left],arr2[right]);
//       left--; right++;
//     }
//     else break;
//   }
//   sort(arr1,arr1+n);
//   sort(arr2,arr2+m);
//   for(int i=0;i<n;i++){
//     cout << arr1[i] << " ";
//   }
//   for(int j=0;j<m;j++){
//     cout << arr2[j] << " ";
//   }
// }

//Rearrange array elements by sign

//tc=o(N)
//sc=o(n)
// int main(){
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }
//   int ans[n];
//   int posidx=0;
//   int negidx=1;
//   for(int i=0;i<n;i++){
//     if(arr[i]<0){
//       ans[negidx]=arr[i];
//       negidx+=2;
//     }
//     else{
//       ans[posidx]=arr[i];
//       posidx+=2;
//     }
//   }

//   for(int it:ans){
//     cout << it << " ";
//   }
// }

//Brute

// int main()
// {
//   int n;
//   cin >> n;
//   int arr[n];
//   for(int i=0;i<n;i++){
//     cin >> arr[i];
//   }
//   vector<int> pos;
//   vector<int> neg;

//   for(int i=0;i<n;i++){    //o(n)
//     if(arr[i]<0) neg.push_back(arr[i]);   
//     else pos.push_back(arr[i]);
//   }

//   for(int i=0;i<n/2;i++){      //o(n)
//     arr[2*i]=pos[i];
//     arr[2*i+1]=neg[i];
//   }

//   for(int it:arr){
//     cout << it << " ";            //tc=o(2N)
//   }                               //sc=o(N)={n/2+n/2}
// } 

// when pos and negatives are not equal
int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  int i=0;
  while(i<n){
    if(arr[i]<0){

    }
  }
}