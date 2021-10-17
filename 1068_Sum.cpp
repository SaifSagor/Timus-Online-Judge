/*
Your task is to find the sum of all integer numbers lying between 1 and N inclusive.

Input
The input consists of a single integer N that is not greater than 10000 by it's absolute value.

Output
Write a single integer number that is the sum of all integer numbers lying between 1 and N inclusive.

Sample
input
-3
Output
-5

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,i;
	cin >> n;
	int sum = 0;

	if(n<=0){
		for(i=n; i<=1; i++){
			sum = sum + i;
		}
	}
	else{
		for(i=1; i<=n; i++){
			sum = sum + i;
		}
	}

	cout << sum << endl;
	
	return 0;
}
