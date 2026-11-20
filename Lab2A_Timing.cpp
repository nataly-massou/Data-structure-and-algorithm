#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;

long long sumToIter(int n) //sum in iteration
{
	long long total = 0; //storing the sum
	for (int i = 1; i <= n; i++)
	{
		total += i;
	}
	return total;
}

long long sumToRec(int n) //sum in recursion
{
	if (n == 0) //base case
	{
		return 0;
	}
	return n + sumToRec(n - 1);
}

int main()
{
	int n;
	char version;
	cout << "Enter n: ";
	cin >> n;
	cout << "Version(i = iterative, r = recursive): ";
	cin >> version;

	auto start = steady_clock::now(); //to read the time

	long long result;
	if (version == 'i')
	{
		result = sumToIter(n);
	}
	else
	{
		result = sumToRec(n);
	}

	auto stop = steady_clock::now();
	auto ms = duration_cast<milliseconds>(stop - start).count();

	cout << "sum = " << result << endl;
	cout << "time = " << ms << "ms" << endl;

	return 0;
}