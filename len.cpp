#include <iostream>
using namespace std;
int main() {
	int num[] = {100, 54, 24, 38, 13, 92};
	int x = sizeof(num) / sizeof(num[0]);
	
	cout << x << endl;

	return 0;
}
