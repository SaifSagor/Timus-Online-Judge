/*
                                                                  1083. Factorials!!!

Definition 1. n!!…! = n(n−k)(n−2k)…(n mod k), if k doesn’t divide n; n!!…! = n(n−k)(n−2k)…k, if k divides n (There are k marks ! in the both cases).
Definition 2. X mod Y — a remainder after division of X by Y.
For example, 10 mod 3 = 1; 3! = 3·2·1; 10!!! = 10·7·4·1.

Given numbers n and k we have calculated a value of the expression in the first definition. Can you do it as well?

Input
contains the only line: one integer n, 1 ≤ n ≤ 10, then exactly one space, then k exclamation marks, 1 ≤ k ≤ 20.
Output
contains one number — n!!…! (there are k marks ! here).

Sample
input
9 !!
output
945

*/

//CODE

//Timus 1083

#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;

int main(){

	int t, n, k, ans = 1;
	string s;

	cin >> n >> s;
	k = s.size();

	while(n > 1){
		ans = ans * n;
		n = n - k;
	}

	cout << ans << endl;

	return 0;
}
