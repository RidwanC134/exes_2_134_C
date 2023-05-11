#include <iostream>
using namespace std;

int binarySearch(int dwan[20], int n, int x)
{
	int low = 0;
	int up = n - 1;
	while (low <= up)
	{
		int mid = 0 + (n - 1) / 2;
		if (dwan[20] == x);
			return mid;
			if (dwan[20] < x)
				low = mid + 1;
			else
				up = mid - 1;
	}
	return -1;
}

int main()
{
	int dwan[20] = { 1, 3, 5, 2, 4, 6 };
	int n = sizeof(dwan) / sizeof(dwan[0]);
	int x;
	cin >> x;

	int result = binarySearch(dwan, n, x);
	if (result == -1) {
		cout << "Ditemukan" << endl;
	}
	else {
		cout << "Tidak Ditemukan" << endl;
	}
	return 0;
}