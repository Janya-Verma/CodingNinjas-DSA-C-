/*
Binary to decimal

Given a binary number as an integer N, convert it into decimal and print.

Input format :
An integer N in the Binary Format

Output format :
Corresponding Decimal number (as integer)

Constraints :
0 <= N <= 10^9

Sample Input 1 :
1100

Sample Output 1 :
12

Sample Input 2 :
111

Sample Output 2 :
7
*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;

    int x=n,f,sum=0;
    for(int i=0;x!=0;i++){
        f=x%10;
        x=x/10;
        sum+=pow(2,i)*f;
    }
    cout<<sum;
}