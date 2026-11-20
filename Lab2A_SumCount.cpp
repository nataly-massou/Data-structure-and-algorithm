// Lab2A: Summation and counting additions
#include<iostream>
using namespace std;

long long ops = 0; // for counting the additions
long long calls = 0;

long long sumToIter(int n) //summation in iterrations
{
	long long total = 0; //to save the sum in it 
	for (int i = 1; i <= n; i++)
	{
		total += i;
		ops++; //increasing the count
	}
	return total;
}

long long sumToRec(int n) //summation in recursion
{
	calls++;
	if (n == 0) //base case
	{
		return 0;
	}
	ops++; //increasing the count
	return n + sumToRec(n - 1);
}

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;

	//iterative
	ops = 0;  
	long long s1 = sumToIter(n); 
	cout << "Iterative : sum = " << s1 << ", additions = " << ops << endl;

	//recursive
	ops = 0;
	long long s2 = sumToRec(n);
	cout << "Recursive : sum = " << s2 << ", additions = " << ops << ", calls: " << calls << endl;

	return 0;
}