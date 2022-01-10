#include <iostream>
#include <cmath>

using namespace std;

void	hanoi_tower(int n, int from, int other, int to)
{
	if (n == 1)
		cout << from << " " << to << "\n";
	else
	{
		hanoi_tower(n - 1, from, to, other);
		cout << from << " " << to << "\n";
		hanoi_tower(n - 1, other, from ,to);
	}
}

int	main(void)
{
	int N;

	cin >> N;
	cout << (int)pow(2, N) - 1 << "\n";
	hanoi_tower(N, 1, 2, 3);
}
