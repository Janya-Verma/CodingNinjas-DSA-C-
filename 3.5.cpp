/*
Number Pattern 2

Print the following pattern

Pattern for N = 4
   1
  23
 345
4567

The dots represent spaces.

Input Format :
N (Total no. of rows)

Output Format :
Pattern in N lines

Sample Input :
5
Sample Output :
    1
   23
  345
 4567
56789

The dots represent spaces.
*/

#include<iostream>
using namespace std;


int main(){
	int N;
	cin>>N;

	int i=1;
   
   	while(i<=N){
		int k=i;
        int j=1;
        int space=1;

        while(space<=N-i){
            cout<<" ";
            space++;
        }

		while(j<=i){
			cout<<k;
            k++;
            j++;
		}
		cout<<endl;
        i++;
	}
}
