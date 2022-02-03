/*
* 4375 : 1
* 문제 : 2와 5로 나누어 떨어지지 않는 정수 n (1 <= n <= 10000)가 주어졌을때,
	1로만 이루어진 n의 배수를 찾는 프로그램을 작성하시오.
* 입력 : 여러개의 테스트 케이스로 이루어져있다. 각 케이스는 한줄로 이루어져 있고, n이 주어진다.
* 출력 : 1로 이루어진 n의 배수 중 가장 작은 수의 자리수를 출력한다.
3 -> 3 111
7 -> 6 111111
9901 -> 12 111111111111
*/
#include <iostream>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	int N;

	while (cin >> N)
	{
		int one = 1;
		int count = 1;
		while (1)
		{
			if (one % N == 0)
				break ;
			one %= N;
			one = one * 10 + 1;
			count++;
		}
		cout << count << "\n";
	}
}
