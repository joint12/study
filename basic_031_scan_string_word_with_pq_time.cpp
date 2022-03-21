#define _CRT_SECURE_NO_WARNINGS

#include <chrono>
#include <stdio.h>
#include <iostream>
#include <string>
#include <queue>
#include <set>

int main()
{
	char ch[3000][30];

	freopen("random_words_3000.txt", "r", stdin);
	for (int i = 0; i < 3000; ++i)
		scanf("%s", ch[i]);

	std::cout << "ch[0] : " << ch[0] << std::endl;
	std::cout << "ch[1] : " << ch[1] << std::endl;
	std::cout << "ch[2] : " << ch[2] << std::endl;
	std::cout << "ch[2999] : " << ch[2999] << std::endl;

	///////////////////////////////////////////
	std::chrono::system_clock::time_point t_start;
	std::chrono::system_clock::time_point t_end;
	std::chrono::duration<double> sec;

	std::priority_queue<std::string> pq_words;

	///////////////////////////////////////////
	t_start = std::chrono::system_clock::now();
	for (int i = 0; i < 100; ++i)
		for (int j = 0; j < 3000; ++j)
			pq_words.push(ch[j]);

	t_end = std::chrono::system_clock::now();
	sec = t_end - t_start;
	std::cout << "Test() 함수를 수행하는 걸린 시간(초) : " << sec.count() << " seconds" << std::endl;

	return 0;
}

////////////////////////
//ch[0] : today
//ch[1] : delicious
//ch[2] : react
//ch[2999] : nun
//Test() 함수를 수행하는 걸린 시간(초) : 2.84513 seconds
