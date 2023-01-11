// Cooldown.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

string skillname[99];
string sname;
int cooltime[99];
int stime;
string choose;



void introduce() {
	cout << "TRPG 쿨타임 계산기 입니다." << endl;

	cout << endl;
}

void choossing() {
	cout << "무엇을 도와드릴까요?" << endl;

	cout << endl;

	cout << "1 - 쿨다운 1 감소" << endl;
	cout << "2 - 스킬 등록" << endl;
	cout << "3 - 현재 스킬 현황" << endl;
	
	cout << endl;

	cin >> choose;

	cout << endl;

	if (choose == "1") {
		cout << "모든 스킬의 쿨다운을 1 낮췄습니다." << endl;
		cout << endl;
		cout << "스킬 목록" << endl;
	}

	if (choose == "2") {
		cout << "스킬 이름을 말해주세요" << endl;

		cout << endl;

		cin >> sname;
		skillname[0] = sname;


		cout << endl;

		cout << "이제 쿨타임을 말해주세요" << endl;

		cout << endl;

		cin >> stime;
		cooltime[0] = stime;
		cout << endl;
	}

	if (choose == "3") {
		cout << endl;
		cout << "스킬 목록" << endl;
	}

}
int main()
{
	introduce();
	while (true) {
		choossing();
	}
}


