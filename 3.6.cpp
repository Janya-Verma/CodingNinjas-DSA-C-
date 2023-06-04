/*
Start Pattern

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
    int count=-1;

    if(n>=0 && n<=50){
        while(i<=n){
            int space=1;
            while(space<=n-i){
                cout<<" ";
                space++;
            }
            
            int odd=1;
            while(odd<=count+2){
                cout<<"*";
                odd=odd+1;
            }
            count=count+2;

            cout<<endl;
            i++;
        }
    }
}
