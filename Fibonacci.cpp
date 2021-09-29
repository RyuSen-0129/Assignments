/* A program to form a fibonacci series */
#include <iostream>
using namespace std;

int main()
{
	int nc, sum,count=0;
	int first, second;
	cout << "Enter the no. of terms please" << endl;
	cin >> nc;
	cout << "Enter the first number please" << endl;
	cin >> first;
	cout << "Enter the second number please"<<endl;
	cin >> second;
	while(count < nc){
		sum = first + second;
		cout << sum << endl;
		first = second;
		second = sum;
		count++;
	}
	return 0;
}
\\Arnab pal
