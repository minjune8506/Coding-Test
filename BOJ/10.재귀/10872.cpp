#include <iostream>

using namespace std;

int	factorial(int n)
{
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}

int	main(void)
{
	int N;

	cin >> N;
	cout << factorial(N) << "\n";	
}
