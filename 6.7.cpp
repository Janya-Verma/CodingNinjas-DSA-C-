/*
Reverse of a number

Write a program to generate the reverse of a given number N. Print the corresponding reverse number.
Note : If a number has trailing zeros, then its reverse will not include them. For e.g., 
reverse of 10400 will be 401 instead of 00401.

Input format :
Integer N

Output format :
Corresponding reverse number

Constraints:
0 <= N < 10^8

Sample Input 1 :
1234

Sample Output 1 :
4321

Sample Input 2 :
1980

Sample Output 2 :
891
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int x=n,i=0,f=1;
    while(i==0 && n>0){
        i=x%10;
        if(i==0){
            x=x/10;
        }
    }
    while(x!=0){
        f=x%10;
        x=x/10;
        cout<<f;
    }
    if(n==0){
        cout<<0;
    }
}