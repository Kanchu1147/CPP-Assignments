//Program to find Fibonacci series using "DO_WHILE" loop.
//Make it interactive for user using 'n' as Number of terms.

#include<iostream>
using namespace std;
int main(){
	int n, first = 0, second = 1, next,c;
	cout << "Enter number of terms:\n";
	cin >> n;
	cout << "The Fibonacci series:\n";
	cout << first << " " << second << " ";
	c = 2;
	do{ 
		next = first + second;
		cout << next << "    ";
		first = second;
		second = next; 
		c++;
	}while( c <= n);
	       
		cout <<"\n";
	return 0;
}
