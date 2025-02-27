#include<iostream>

int main()
{
	setlocale(LC_ALL, "ru");

	int one, two;
	one = 0;
	two = 0;

	const int row = 3;
	const int col = 4;
	int arr[row][col];

	std::cout << "Ââåäèòå ïåðâîå ÷èñëî:\n";
	std::cin >> one;
	std::cout << "Ââåäèòå âòîðîå ÷èñëî:\n";
	std::cin >> two;
	std::cout << "\n";
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; i < col; j++)
		{
			arr[i][j] = one * two;
			one = one * two;
		}
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}

	int one1, two2;
	one1 = 0;
	two2 = 0;


	const int rol = 3;
	const int cow = 4;
	int arr2[rol][cow];

	std::cout << "Ââåäèòå ïåðâîå ÷èñëî:\n";
	std::cin >> one1;
	std::cout << "Ââåäèòå âòîðîå ÷èñëî:\n";
	std::cin >> two2;
	std::cout << "\n";
	for (int i = 0; i < rol; i++)
	{
		for (int j = 0; i < cow; j++)
		{
			arr2[i][j] = one1 + two2;
			one1 = one1 + two2;
		}
	}

	for (int i = 0; i < rol; i++)
	{
		for (int j = 0; j < cow; j++)
		{
			std::cout << arr2[i][j] << " ";
		}
		std::cout << "\n";
	}
	return 0;
}





