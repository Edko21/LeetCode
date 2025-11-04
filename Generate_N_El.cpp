#include <string>
#include <queue>
#include <iostream>

void generateBinary(int n) {
	if (n <= 0)
		return;
	std::queue<std::string> q;
	q.push("1");

	for (int i = 1;i <= n;++i) {
		std::string curr = q.front();
		q.pop();

		std::cout << curr;

		q.push(curr + "0");
		q.push(curr + "1");
	}
}

int main() {
	int n = 10;
	generateBinary(n);
	return 0;
}