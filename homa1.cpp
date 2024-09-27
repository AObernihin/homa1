using namespace std;

#include <iostream>

int main()
{
	const int col = 3, row = 3;
	int a, temp, multi;
	int arr[row][col];
	cout << "enter first:";
	cin >> a;
	arr[0][0] = a;
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			if (arr[x][y] == a)
			{
				cout << arr[x][y] << " ";
				continue;
			}
			if (y == 0)
			{
				arr[x][y] = arr[x - 1][col] * 2;
			}
			arr[x][y] = arr[x][y - 1] * 2;
			cout << arr[x][y] << " ";
		}
		cout << endl;
	}
	//=========================//
	cout << "enter first:";
	cin >> a;
	arr[0][0] = a;
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			if (arr[x][y] == a)
			{
				cout << arr[x][y] << " ";
				continue;
			}
			if (y == 0)
			{
				arr[x][y] = arr[x - 1][col] + 1;
			}
			arr[x][y] = arr[x][y - 1] + 1;
			cout << arr[x][y] << " ";
		}
		cout << endl;
	}
	//==================//
}

