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
	// 아래의 좌측 조건은 current가 0까지 도달했는지 확인을 위한 것임
	// 우측은 부모가 값이 큰지 확인을 위한 것임
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
		// child를 선택하기 위함
		int child;
		if (current * 2 + 2 == heap_size) // heap_size가 2인 경우를 상상해보자. 그러면 이해가 쉬움
		{
			// 여기에 들어왔으면 'current * 2 + 2'가 비어있을 것임
			child = current * 2 + 1;
		}
		else // 여기에 왔으면 child가 좌우 모두 존재함을 의미함. 좌우 중에서 값이 작은 node로 내려가기 위함
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
