#include <bits/stdc++.h>
using namespace std;


//1. int print(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout << "* ";
//         }
//         cout << "\n";
//     }
// }

// int main(){
//     int t;
//     cin >> t;
//     for(int i=0;i<t;i++){
//         int n;
//         cin >> n;
//         print(n);
//     }

// }


// input:
// 2   two test cases in which n is 3 ,4 
// 3
// 4

// output:
// * * * 
// * * *
// * * *
// * * * * 
// * * * *
// * * * *
// * * * *





//2. int main(){
//     for(int i=0;i<5;i++){
//         for(int j=0;j<=i;j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// output: 
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 



//3. int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }


// output : 
// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5



//4. int main(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             cout << i << " ";
//         }
//         cout << endl;
//     }
// }

// Output : 
// 1 
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5


//5. int main(){
//     for(int i=0;i<5;i++){
//         for(int j=5;j>i;j--){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

//5. int main(){
//     int n=5;
//     for(int i=0;i<n;i++){
//         for(int j=1;j<n-i+1;j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// output:
// * * * * * 
// * * * *
// * * *
// * *
// *


//6.  int main(){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

// if n = 5 then ouput ;
// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1



//7. int main(){
//     int n=5;
//     for(int i=0;i<n;i++){
//         // space
//         for(int j=0;j<n-i-1;j++){
//             cout << " ";
//         }

//         //star
//         for(int j=0;j<2*i+1;j++){
//             cout << "*";
//         }
//         //space
//         for(int j=0;j<n-i-1;j++){
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// output:
//     *    
//    ***
//   *****
//  *******
// *********


// 8. int main(){
//     int n=5;
//     for(int i=0;i<n;i++){
//         // space
//         for(int j=0;j<i;j++){
//             cout << " ";
//         }
//         //star
//         for(int j=0;j<(2*n)-(2*i+1);j++){
//             cout << "*";
//         }
//         //space
//         for(int j=0;j<i;j++){
//             cout << " ";
//         }
//         cout << endl;
//     }
// }


// output:
// *********
//  *******
//   *****
//    ***
//     *




// 9.int main(){
//     int n=5;
//     for(int i=0;i<n;i++){
//         // space
//         for(int j=0;j<n-i-1;j++){
//             cout << " ";
//         }

//         //star
//         for(int j=0;j<2*i+1;j++){
//             cout << "*";
//         }
//         //space
//         for(int j=0;j<n-i-1;j++){
//             cout << " ";
//         }
//         cout << endl;
//     }
//     for(int i=0;i<n;i++){
//         // space
//         for(int j=0;j<i;j++){
//             cout << " ";
//         }
//         //star
//         for(int j=0;j<(2*n)-(2*i+1);j++){
//             cout << "*";
//         }
//         //space
//         for(int j=0;j<i;j++){
//             cout << " ";
//         }
//         cout << endl;
//     }
// }


// output :
//     *    
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *



//10. int main(){
//     int n;
//     cin >> n;
//     for(int i=1;i<=2*n-1;i++){
//         int stars=i;
//         if(i>n) stars=2*n-i;
//         for(int j=1;j<=stars;j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// input 5

// output:
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

//11. int main(){
//     int n;
//     cin >> n;
//     int start;
//     for(int i=0;i<n;i++){
//         if(i%2==0) start=1;
//         else start=0;
//         for(int j=0;j<=i;j++){
//             cout << start;
//             start=1-start;
//         }
//         cout << endl;
//     }
// }


// input: 5
// output:
// 1
// 01
// 101
// 0101
// 10101




//12. int main(){
//     int n;
//     cin >> n;
//     int space=2*(n-1);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout << j;
//         }
//         for(int j=1;j<=space;j++){
//             cout << " ";
//         }
//         for(int j=i;j>=1;j--){
//             cout << j;
//         }
//         cout << endl;
//         space -= 2;
//     }
// }

// input: 4

// output:
// 1      1
// 12    21
// 123  321
// 12344321


//13. int main(){
//     int n;
//     cin >> n;
//     int num=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout << num;
//             num+=1;
//         }
//         cout << endl;
//     }
// }


// input: 5

// output: 
// 1
// 23
// 456
// 78910
// 1112131415


//14. int main(){
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++){
//         for(char ch='A';ch<='A'+i;ch++){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }

// input : 5

// output: 
// A 
// A B
// A B C
// A B C D
// A B C D E


//15. int main(){
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++){
//         for(char ch='A';ch<='A'+(n-i-1);ch++){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }

// input: 5

// output:
// A B C D E 
// A B C D
// A B C
// A B
// A


//16. int main(){
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++){
//         char ch='A'+i;
//         for(int j=0;j<=i;j++){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
// }

// input: 5

// output: 
// A 
// B B
// C C C
// D D D D
// E E E E E



//17. int main(){
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout << " ";
//         }
//         char ch ='A';
//         int breakpoint=(2*i+1)/2;
//         for(int j=1;j<=(2*i)+1;j++){
//             cout << ch;
//             if(j<=breakpoint) ch++;
//             else ch--;
//         }
//         for(int j=0;j<n-i-1;j++){
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

// input: 5

// output:
//     A    
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA


//18. int main(){
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++){
//         char ch='A'+(n-1)-i;
//         for(int j=0;j<=i;j++){
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
// }

// input: 5
// output: 
// E 
// D E
// C D E
// B C D E
// A B C D E




//19.  int main(){
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             cout << "*";
//         }
//         for(int j=0;j<2*i;j++){
//             cout << " ";
//         }
//         for(int j=0;j<n-i;j++){
//             cout << "*";
//         }
//         cout << endl;
//     }

//     for(int i=1;i<=n;i++){
//         for(int j=0;j<i;j++){
//             cout << "*";
//         }
//         for(int j=0;j<2*(n-i);j++){
//             cout << " ";
//         }
//         for(int j=0;j<i;j++){
//             cout << "*";
//         }
//         cout << endl;
//     }

// }

// input : 5
// output : 
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********


 
//20. int main(){
//     int n;
//     cin >> n;
//     int space=2*n-2;
//     for(int i=1;i<=2*n-1;i++){
//         int stars=i;
//         if(i>n) stars=2*n-i;
//         for(int j=1;j<=stars;j++){
//             cout << "*";
//         }
//         for(int j=1;j<=space;j++){
//                 cout << " ";
//             }

//         for(int j=1;j<=stars;j++){
//             cout << "*";
//         }
//         cout << endl;
//         if(i<n) space -=2;
//         else space +=2;
//     }
// }

// input: 5

// output : 
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

//21. int main(){
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==0 || j==0 || i==n-1 || j==n-1){
//                 cout << "*";
//             }
//             else cout << " ";
//         }
//         cout << endl;
//     }
// }

// input : 4

// output: 
// ****
// *  *
// *  *
// ****


//22. int main(){
//     int n;
//     cin >> n;
//     for(int i=0;i<2*n-1;i++){
//         for(int j=0;j<2*n-1;j++){
//             int top=i;
//             int left=j;
//             int right =(2*n-2)-j;
//             int down=(2*n-2)-i;
//             cout << (n-min(min(top,down),min(left,right)));
//         }
//         cout << endl;
//     }
// }



// input : 4

// output: 
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444


 

