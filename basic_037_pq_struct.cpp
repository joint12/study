#include <iostream>
#include <queue>
#include <functional>    // greater
using namespace std;

struct Student {
	int id;
	int math, eng;
	Student(int num, int m, int e) :
		id(num), math(m), eng(e) {}    // 생성자 정의
};

// 학번을 기준으로 학번(id) 값이 큰 것이 Top 을 유지 하도록 한다.
struct cmp {
	bool operator()(Student a, Student b) {
		return a.id < b.id;
	}
};

int main() {
	// 위에서 만든 cmp 구조체를 넣어 준다.
	priority_queue<Student, vector<Student>, cmp> pq;


	pq.push(Student(3, 100, 50));
	pq.push(Student(1, 60, 50));
	pq.push(Student(2, 80, 50));
	pq.push(Student(4, 90, 50));
	pq.push(Student(5, 70, 40));

	while (!pq.empty()) {
		Student ts = pq.top(); pq.pop();
		cout << "(학번, 수학 , 영어 ) : " << ts.id << ' ' << ts.math << ' ' << ts.eng << '\n';
	}

	return 0;
}
// https://kbj96.tistory.com/15

//(학번, 수학, 영어) : 5 70 40
//(학번, 수학, 영어) : 4 90 50
//(학번, 수학, 영어) : 3 100 50
//(학번, 수학, 영어) : 2 80 50
//(학번, 수학, 영어) : 1 60 50
