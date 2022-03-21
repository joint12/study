#include<iostream>
#include<algorithm>    //reverse
#include<string>    //string
using namespace std;

int main(void)
{
    string str = "BlockDMask";
    cout << "=> reverse(str.begin(), str.end());" << endl << endl;
    cout << "Before : " << str << endl; //"BlockDMask"

    reverse(str.begin(), str.end());

    cout << "After  : " << str << endl; //"ksaMDkcolB"
    return 0;
}


//출처: https://blockdmask.tistory.com/363 [개발자 지망생]