#include<iostream>
#include<queue>
using namespace std;
int main()
{
	queue<int> Queue;
	int x=4, y=5;
	Queue.push(x);
	Queue.push(y);
	x = Queue.front();
	Queue.pop();
	Queue.push(x + 5);
	Queue.push(16);
	Queue.push(x);
	Queue.push(y - 3);
	cout << "Queue Elements: ";
	while (!Queue.empty())
	{
	cout << Queue.front() << " ";
	Queue.pop();
	}
	cout << endl;
	return 0;
}
