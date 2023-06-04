/*
Code : Star Pattern

Print the following pattern
Pattern for N = 4
    *
   *** 
  *****
 *******

Hint
As taught in the video, you just have to modify the code so that instead of printing numbers, it should output stars ('*').
The dots represent spaces.

Input Format :
N (Total no. of rows)

Output Format :
Pattern in N lines

Constraints :
0 <= N <= 50

Sample Input 1 :
3

Sample Output 1 :
   *
  *** 
 *****

Sample Input 2 :
4

Sample Output 2 :
    *
   *** 
  *****
 *******
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int sps=1;
        while(sps<n-i+1){
            cout<<" ";
            sps++;
        }
        int num=1;
        while(num<=i){
            cout<<"*";
            num++;
        }
        num=i-1;
        while(num>=1){
            cout<<"*";
            num--;
        }
        cout<<endl;
        i++;
    }
}