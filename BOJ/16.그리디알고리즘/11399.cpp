/**
 * 11399 : ATM
 * 
 * 시간제한 : 1초
 * 
 * ATM앞에 N명의 사람들이 둘을 서있다. 사람은 1번부터 N번까지 번호가 매겨져 있다.
 * i번 사람이 돈을 인출하는데 걸리는 시간은 Pi분이다.
 * 사람들이 줄을 서는 순서에 따라, 돈을 인출하는데 필요한 시간의 합이 달라지게 된다.
 * 줄을 서 있는 사람의 수 N과 각 사람이 돈을 인출하는데 걸리는 시간 Pi가 주어졌을 때,
 * 각 사람이 돈을 인출하는데 필요한 시간의 합의 최솟값을 구하는 프로그램을 작성하시오.
 * 
 * 입력
 * 첫째 줄에 사람의 수 N (1 <= N <= 1,000)이 주어진다.
 * 둘쨰 줄에 각 사람이 돈을 인출하는데 걸리는 시간 Pi가 주어진다.
 * (1 <= Pi <= 1,000)
 * 
 * 출력
 * 첫쨰 줄에 각 사람이 돈을 인출하는데 필요한 시간의 합의 최솟값을 출력
 */

/**
 * 풀이
 * 
 * 대기시간을 가장 짧게 만들기 위해서는 가장 짧은 작업부터 수행해야 한다.
 * Shortest Job First 알고리즘을 이용
 * 계산값을 계속 저장해 효율성을 올릴 수 있을 것으로 보인다.
 * 값이 1000이 최고이므로 DP를 이용하지 않아도 정답.
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;

int main(void)
{
	vector<int> jobs;
	int waiting = 0;

	cin >> N;
	for (int i = 0 ; i < N ; i++)
	{
		int time;

		cin >> time;
		jobs.push_back(time);
	}
	sort(jobs.begin(), jobs.end());
	for (int i = 0 ; i < jobs.size() ; i++)
	{
		int sum = 0;

		for (int j = 0 ; j <= i ; j++)
			sum += jobs[j];
		waiting += sum;
	}
	cout << waiting << "\n";
}
