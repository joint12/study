// https://luv-n-interest.tistory.com/975
//
// array는 컴파일할 때 크기가 결정된다. 미리 알고 선언해야한다는 말이다.
// 컴파일할 때 크기가 결정되므로 '무조건 스택 메모리'를 사용한다.
//
// 이런 경우 vector를 이용한다.

#include <iostream>
#include <vector>

int main() 
{
    int num1 = 3;
    constexpr int num2 = 5;

    int arr1[3];
    // int arr2[num1]; // 에러난다.
    int arr3[num2];

    std::vector<int> vec1(3);
    std::vector<int> vec2(num1);

    return 0;
}