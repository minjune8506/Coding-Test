#include <iostream>
#include <stack>

using namespace std;

int	main(void)
{
	int N;
	int num;
	string cmd;
	stack<int> s;

	cin >> N;
	while (N > 0)
	{
		cin >> cmd;
		if (cmd == "push")
		{
			cin >> num;
			s.push(num);
		}
		else if (cmd == "pop")
		{
			if (s.empty())
				cout << -1 << "\n";
			else
			{
				cout << s.top() << "\n";
				s.pop();
			}
		}
		else if (cmd == "size")
			cout << s.size() << "\n";
		else if (cmd == "top")
		{
			if (s.empty())
				cout << -1 << "\n";
			else
				cout << s.top() << "\n";
		}
		else if (cmd == "empty")
			cout << s.empty() << "\n";
		N--;
	}
}
