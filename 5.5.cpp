/*
Code : Diamond of stars

Print the following pattern for the given number of rows.
Note: N is always odd.

Pattern for N = 5
  *
 ***
*****
 ***
  *

The dots represent spaces.

Input format :
N (Total no. of rows and can only be odd)

Output format :
Pattern in N lines

Constraints :
1 <= N <= 49

Sample Input 1:
5

Sample Output 1:
  *
 ***
*****
 ***
  *

Sample Input 2:
3

Sample Output 2:
  *
 ***
  *
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    int ispc=(n+1)/2;
    while(i<=(n+1)/2){
        int spc=1;
        while(spc<=ispc-1){
            cout<<" ";
            spc++;
        }
        ispc--;
        int j=1;
        while(j<=2*i-1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    int t=1;
    int count=1;
    int l=i-2;
    while(t<=i-2){
        int spc=1;
        while(spc<=count){
            cout<<" ";
            spc++;
        }
        count++;
        int r=1;
        while(r<=2*l-1){
            cout<<"*";
            r++;
        }
        l--;
        cout<<endl;
        t++;
    }    
}