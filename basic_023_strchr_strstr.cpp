// https://dojang.io/mod/page/view.php?id=369
// https://dojang.io/mod/page/view.php?id=371

#include <iostream>
#include <string>

int main(void)
{
	char s1[30] = "A Garden Diary";  // 크기가 30인 char형 배열을 선언하고 문자열 할당
	char* ptr1 = strchr(s1, 'a');     // 'a'로 시작하는 문자열 검색, 포인터 반환

	while (ptr1 != NULL)              // 검색된 문자열이 없을 때까지 반복
	{
		std::cout << ptr1 << std::endl;
		ptr1 = strchr(ptr1 + 1, 'a');  // 포인터에 1을 더하여 a 다음부터 검색
	}

	std::cout << "-----------------------" << std::endl;
	////////////////////////////////////////////////////

	char s2[100] = "A Garden Diary _1_ A Garden Diary _2_ A Garden Diary _3_ ";
	char* ptr2 = strstr(s2, "den");     // den으로 시작하는 문자열 검색, 포인터 반환

	while (ptr2 != NULL)                // 검색된 문자열이 없을 때까지 반복
	{
		std::cout << ptr2 << std::endl;
		ptr2 = strstr(ptr2 + 1, "den");  // den 포인터에 1을 더하여 e부터 검색
	}

	return 0;
}

// arden Diary
// ary
// ---------------------- -
// den Diary _1_ A Garden Diary _2_ A Garden Diary _3_
// den Diary _2_ A Garden Diary _3_
// den Diary _3_
