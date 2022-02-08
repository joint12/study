#include <iostream>
#include <ctime>

#define MAX_SIZE 100

int heap[MAX_SIZE];
int heap_size;

void HeapInit()
{
	heap_size = 0;
}

bool HeapPush(int value)
{
	if (heap_size + 1 > MAX_SIZE)
	{
		std::cout << "queue is full!" << std::endl;
		return false;
	}

	heap[heap_size] = value;

	int current = heap_size;
	while (current > 0 && heap[current] < heap[(current - 1) / 2])
	{
		int temp = heap[(current - 1) / 2];
		heap[(current - 1) / 2] = heap[current];
		heap[current] = temp;
		current = (current - 1) / 2;
	}

	++heap_size;

	return true;
}

int HeapPop()
{
	if (heap_size <= 0)
		return -1;

	int top = heap[0];
	--heap_size;

	heap[0] = heap[heap_size];

	int current = 0;
	while (current * 2 + 1 < heap_size)
	{
		int child;
		if (current * 2 + 2 == heap_size)
		{
			child = current * 2 + 1;
		}
		else
		{
			child = heap[current * 2 + 1] < heap[current * 2 + 2] ? current * 2 + 1 : current * 2 + 2;
		}

		if (heap[current] < heap[child])
		{
			break;
		}

		int temp = heap[current];
		heap[current] = heap[child];
		heap[child] = temp;

		current = child;
	}

	return top;
}

int main(void)
{
	HeapInit();

	// rand: https://blockdmask.tistory.com/308
	srand(time(NULL)); // 난수 초기화

	/////////////////////////////////////////////
	for (int i = 0; i < 20; ++i)
	{
		int val = (rand() % 10000 + 1);
		//std::cout << val << ", ";
		HeapPush(val);
	}

	//std::cout << "------------- " << std::endl;

	for (int i = 0; i < 20; ++i)
		std::cout << HeapPop() << ", ";
	std::cout << std::endl;

	/////////////////////////////////////////////
	//
	//for (int i = 0; i < 20; ++i)
	//{
	//	HeapPush(100 - i);
	//}

	////for (int i = 0; i < 20; ++i)
	////	std::cout << heap[i] << ", ";
	////std::cout << std::endl;

	//// 아래의 결과는 큰 숫자 순으로 나열 되어야 한다.
	//for (int i = 0; i < 20; ++i)
	//	std::cout << HeapPop() << ", ";
	//std::cout << std::endl;

	/////////////////////////////////////////////

	return 0;
}

// ----------------------------------
//
//                00
//        01              02 
//    03      04      05      06
//  07  08  09  10  11  12  13  14
//
// ----------------------------------
