#include <queue>
#include <iostream>

template <class T>
std::queue<T> dropEverySecond(std::queue<T> q) {
	std::queue<T> res;
	bool keep = true;
	while (!q.empty()) {
		if (keep) {
			res.push(q.front());
		}
		q.pop();
		keep = !keep;
	}
	return res;
}

int main() {
	std::queue<int> q;
	for (int i = 1;i <= 6;++i)
		q.push(i);
	std::queue<int> filtered = dropEverySecond(q);

	while (!filtered.empty()) {
		std::cout << filtered.front() << " ";
		filtered.pop();
	}
	return 0;
}