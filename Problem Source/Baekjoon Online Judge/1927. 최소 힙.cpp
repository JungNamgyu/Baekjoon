#pragma warning (disable:4996)

#include<cstdio>
#include<queue>
using namespace std;

int main() {
	int N;
	priority_queue <int, vector<int>, greater<int> > Min_heap;
	scanf("%d", &N);
	while (N--) {
		int x;
		scanf("%d", &x);
		if (x == 0) {
			if (Min_heap.empty())
				printf("%d\n", 0);
			else {
				printf("%d\n", Min_heap.top());
				Min_heap.pop();
			}
		}
		else
			Min_heap.push(x);
	}
	return 0;
}
