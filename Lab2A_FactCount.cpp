//Lab2A: factorial, counting multiplications and calls
#include<iostream>
using namespace std;

long long mults = 0; //counting multiplication
long long calls = 0; //counting calls

long long factorialIter(int n) //fatorial using iterations
{
	calls++; //icreasing the num of calls
	long long result = 1; //storing the multiplications
	for (int i = 2; i <= n; i++)
	{
		result *= i;
		mults++;
	}
	return result;
}

long long factorialRec(int n) //fatorial using recursion
{
	calls++;
	if (n == 0) //base case
	{
		return 1;
	}
	mults++;
	return n + factorialRec(n - 1);
}

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;

	//iterative
	mults = 0;
	calls = 0;
	long long f1 = factorialIter(n);
	cout << "Iterative: " << n << "! = " << f1 << ", multiplications = " << mults << ", calls = " << calls << endl;

	//recursive
    mults = 0;
	calls = 0;
	long long f2 = factorialRec(n);
	cout << "Recursive: " << n << "! = " << f2 << ", multiplications = " << mults << ", calls = " << calls << endl;

	return 0;
}