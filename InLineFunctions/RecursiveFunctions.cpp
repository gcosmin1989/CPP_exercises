#include <functional>
#include <iostream>

using namespace std;


unsigned long long fibonacci(unsigned long long n);
unsigned long long fibonacci(unsigned long long n) {
	if (n <= 1)
		return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}


int main()
{
	cout << fibonacci(2) << endl;
	cout << fibonacci(6) << endl;
}

