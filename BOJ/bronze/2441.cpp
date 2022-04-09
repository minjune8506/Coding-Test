/**
 * 2441 : 별찍기 - 4
 * 
 * 첫째 줄에는 별 N개, 둘째 줄에는 별 N - 1개, ..., N번째 줄에는 별 1개를 찍는 문제
 * 오른쪽을 기준으로 정렬한 별을 출력하시오.
 * 
 * 입력
 * 첫째 줄에 N (1 <= N <= 100)이 주어진다.
 * 
 * 출력
 * 첫쨰 줄부터 N번째 줄까지 차례대로 별을 출력한다.
 */
#include <iostream>

using namespace std;

int main(void)
{
	int N;

	cin >> N;
	for (int i = N ; i > 0 ; i--)
	{
		for (int j = 0 ; j < N - i ; j++)
		{
			cout << " ";
		}
		for (int j = 0 ; j < i ; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}
