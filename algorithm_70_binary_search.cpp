// https://www.geeksforgeeks.org/binary-search/
// https://en.wikipedia.org/wiki/Binary_search_algorithm

#include <iostream>

int binarySearch(int arr[], int left, int right, int target)
{
	while (left <= right)
	{
		int middle = left + (right - left) / 2;

		if (arr[middle] == target)
			return middle;

		if (arr[middle] < target)
			left = middle + 1;

		else
			right = middle - 1;
	}

	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int target = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, target);
	(result == -1)
		? std::cout << "Element is not present in array" << std::endl
		: std::cout << "Element is present at index " << result << std::endl;

	return 0;
}

// Element is present at index 3