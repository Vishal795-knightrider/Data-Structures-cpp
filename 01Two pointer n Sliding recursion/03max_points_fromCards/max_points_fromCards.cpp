//maximum points you can obtain from cards (k cards)
// you can only pick up from the front or back and consecutively 

// we will pick some elements from the left side (their sum=lsum) and respectively from the right side  (their sum = rsum)

#include <bits/stdc++.h>
using namespace std;

int main(){
  int points[]={6,2,3,4,7,2,1,7,1};
  int n=sizeof(points)/sizeof(points[0]);
  cout << "Enter k: ";
  int k; cin >> k;

  int lsum=0,rsum=0,maxsum=0;       
  for(int i=0;i<k;i++){      //o(k)
    lsum+=points[i];              
  }
  maxsum=lsum;
  int ridx=n-1;        //right index [1,2,3,4,5]  in this in starting its point to 5 here

  for(int i=k-1;i>=0;i--){     //o(k)
    lsum-=points[i];
    rsum+=points[ridx];
    ridx=ridx-1;
    maxsum=max(maxsum,rsum+lsum);
  }
  cout << "Maximum points are: " << maxsum;
}      //tc=o(2k)     sc=o(1)


